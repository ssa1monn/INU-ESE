// 문제 설명
// 양의 정수 2개, a와 b를 (a <= b) 입력 받아 a와 b 사이에 있는 홀수들의 개수 c (a와 b는 제외)를 구하고, 그 홀수들의 합 s를 계산한 후, c + s를 출력한다.

// 입력
// 1 6

// 출력
// c = 2. 홀수는 3, 5이다.
// s = 8. 
// 출력은 10 (= c + s)이다. 
// 10 뒤에 줄바꿈 표시는 없다.

#include <stdio.h>

int main(void)
{
	int a, b;
	int c = 0, s = 0;
	scanf("%d %d", &a, &b);
	for (int i = a + 1; i < b; i++)
	{
		if (i % 2 == 0)
			continue;
		c++;
		s += i;
	}
	printf("%d", c + s);
	return 0;
}