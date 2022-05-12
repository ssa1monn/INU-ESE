// 문제 설명
// 양의 정수 n을 입력받아, n보다 같거나 작은 소수들의 개수를 출력하시오.

// 입력
// 5

// 출력
// 5보다 같거나 작은 소수들은 2, 3, 5이므로 3을 출력한다.

#include <stdio.h>

int main(void)
{
	int n, s = 0, c = 0;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		for (int m = 2; m <= i; m++)
		{
			if (i % m == 0)
				s++;
		}
		if (s == 1)
			c++;
		s = 0;
	}

	printf("%d", c);
	return 0;
}