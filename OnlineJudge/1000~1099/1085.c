// 문제 설명
// 정수 한 개를 입력받아 0부터 그 수까지 순서대로 출력해보자.
// (0 ~ 100)

// 입력
// 정수 한 개가 입력된다.
// (0 ~ 100)

// 출력
// 0부터 그 수까지 줄을 바꿔 한 줄씩 출력한다.

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	
	for (int i = 0; i <= a; i++)
		printf("%d\n", i);

	return 0;
}