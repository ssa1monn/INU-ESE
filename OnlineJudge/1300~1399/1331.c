// 문제 설명
// 2개의 정수 (>0)을 입력 받아 최대 공약수를 출력 하시오.

// 입력
// 12 24

// 출력
// 12

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int MAXcd = 0;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			MAXcd = i;

	printf("%d", MAXcd);

	return 0;
}