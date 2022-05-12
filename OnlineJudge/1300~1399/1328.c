// 문제 설명
// 2개의 정수 (>0) 를 입력 받아 공약수 중 홀수 만을 출력 하시오.
// 홀수 공약수가 없으면 출력 없음.

// 입력
// 3 15

// 출력
// 1
// 3

#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0 && i % 2 != 0)
			printf("%d\n", i);

	return 0;
}