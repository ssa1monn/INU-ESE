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

	printf("������ �Է��Ͻʽÿ�. : ");
	scanf("%d", &input);

	int result = isPrime(input);

	if(result == 1)
		printf("%d�� �Ҽ��Դϴ�.", input);
	else if (result == 0)
		printf("%d�� �Ҽ��� �ƴմϴ�.", input);

	return 0;
}