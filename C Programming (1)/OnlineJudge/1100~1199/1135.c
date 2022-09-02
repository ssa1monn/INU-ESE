// 문제 설명
// 입력된 양의 정수 n (1 <= n <= INT_MAX)에 대하여, n의 약수들 중에서 소수인 것들만 작은 것에서 큰 것 순으로 출력하는 프로그램을 작성하시오.

// 입력
// n은 양의 정수

// 출력
// n의 약수로서 소수인 것들을 작은 것 부터 공백으로 분리해 가면서 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int p = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		p = 0;

		for (int d = 2; d < i; d++)
		{
			if (i % d == 0)
				p++;
		}

		if (p != 0)
			continue;
		else if (n % i == 0)
			printf("%d ", i);
	}
	return 0;
}