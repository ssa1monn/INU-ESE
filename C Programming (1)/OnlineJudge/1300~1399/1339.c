// 문제 설명
// 숫자 N (>= 2)을 입력받아, 1부터 2까지의 합, 1부터 3까지의 합, ... 1부터 N까지의 합 중에서 홀수인 것들만 출력하는 프로그램을 작성하시오.

// 입력
// 5 (N, 양의 정수, 2 <= N <= INT_MAX)

// 출력
// 3 15 (1+2, 1+2+3, 1+2+3+4, 1+2+...+5 중에서 홀수인 것은 3과 15)

#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		for (int m = 1; m <= i; m++)
			sum = sum + m;

		if (sum % 2 != 0)
			printf("%d ", sum);

		sum = 0;
	}

	return 0;
}