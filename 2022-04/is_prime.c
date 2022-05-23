#include <stdio.h>

int is_prime(int input)
{
	int i;
	for (i = 2; i < input; i++)
	{
		if (input % i == 0)
		{
			return 0;
		}
	}
	return 1;
}