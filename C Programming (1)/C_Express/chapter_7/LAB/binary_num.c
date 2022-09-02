#include <stdio.h>

int main(void)
{
	unsigned int num;
	printf("10진수: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("2진수: ");

	for (int i = 0; i <= 7; i++)
	{
		if ((num & mask) == 0)
			printf("0");
		else
			printf("1");
		mask = mask >> 1;
	}
	return 0;
}