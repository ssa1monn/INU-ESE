#include <stdio.h>

int isPrime(int input)
{
	int i;
	for (i = 2; i < input; i++)
	{
		if (input % i == 0 || input <= 1)
			return 0;
	}
	return 1;
}

int main(void)
{
	int input;

	printf("정수를 입력하십시오. : ");
	scanf("%d", &input);

	int result = isPrime(input);

	if(result == 1)
		printf("%d은 소수입니다.", input);
	else if (result == 0)
		printf("%d은 소수가 아닙니다.", input);

	return 0;
}