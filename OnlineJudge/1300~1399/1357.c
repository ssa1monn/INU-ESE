// 문제 설명
// 1개의 정수 n ( >= 0)을 입력받아, n번째 피보나츠 숫자를 출력하시오.
// 0번째 숫자 : 1
// 1번째 숫자 : 1
// 2번째 숫자: : 2
// (출력 끝에 줄바꿈 없음)

// 입력
// 3

// 출력
// 3

#include <stdio.h>

int main(void)
{
	int a=0, b=1, c, temp, n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	printf("%d", b);

	return 0;
}