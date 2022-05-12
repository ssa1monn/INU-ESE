// 문제 설명
// 1개의 정수 (>=0) n을 입력 받아 n번째 피보나츠 수열까지
// 차례로 출력 하시오.
// 0번째 숫자: 1,
// 1번째 숫자: 1,
// 2번째 숫자: 2,
// …

// 입력
// 2

// 출력
// 1
// 1
// 2

#include <stdio.h>

int main(void)
{
	int repeat;
	int temp = 0;
	int fib = 1;

	scanf("%d", &repeat);

	for (int i = 0; i <= repeat; i++)
	{
		printf("%d\n", fib);
		fib = fib + temp;
		temp = fib - temp;
	}

	return 0;
}