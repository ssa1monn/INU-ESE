#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int collatz(int n)
{
	int count = 0;
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = 3 * n + 1;
		count++;
	}
	return count;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", collatz(n));

	return 0;
}