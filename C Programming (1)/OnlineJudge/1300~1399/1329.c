// 문제 설명
// 2개의 정수 (>0) 를 입력 받아 공약수 중 짝수 만을 출력 하시오.
// 만약, 짝수 공약수가 없으면 -1을 출력 하시오.

// 입력
// 3 5

// 출력
// -1

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int even = 0;

	scanf("%d %d", &num1, &num2);

	for (int i = 2; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0 && i % 2 == 0)
		{
			printf("%d\n", i);
			even++;
		}
	}

	if (even == 0)
		printf("-1");

	return 0;
}