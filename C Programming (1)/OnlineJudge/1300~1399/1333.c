// 문제 설명
// 1개의 정수 ( > 2)를 입력 받아 소수인 경우 1, 아니면 0을 출력 하시오.

// 입력
// 3

// 출력
// 1

#include <stdio.h>

int main(void)
{
	int num;
	int div = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			div++;

	if (div <= 2)
		printf("1");
	else
		printf("0");

}