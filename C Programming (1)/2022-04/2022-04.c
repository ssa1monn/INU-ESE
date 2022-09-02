#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#if 0
int main(void)
{
	int temp, arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2 - i; j++)
		{
			if (abs(arr[j]) > abs(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	printf("%d %d", abs(arr[2]) - abs(arr[1]), abs(arr[1]) - abs(arr[0]));
	return 0;
}
#endif

#if 0
int main(void)
{
	const char* h = "hello";

	char S[10];
	scanf("%s", S);
	int n = strlen(S);

	char H1[15];
	char H2[15];

	for (int i = 0; i < n / 2; i++)
		H1[i] = S[i];

	H1[n / 2] = '\0';

	for (int m = n / 2; m < n; m++)
		H2[m - n / 2] = S[m];

	H2[n] = '\0';

	strcat(H1, h);
	strcat(H1, H2);
	H1[n + 5] = '\0';
	printf("%s", H1);

	return 0;
}
#endif

#if 0
int main(void)
{
	int a[5], b[5];
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2], &a[3], &b[3], &a[4], &b[4]);

	int amax = a[0];
	int amin = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > amax) amax = a[i];
		if (a[i] < amin) amin = a[i];
	}

	int bmax = b[0];
	int bmin = b[0];
	for (int n = 0; n < 5; n++)
	{
		if (b[n] > bmax) bmax = b[n];
		if (b[n] < bmin) bmin = b[n];
	}

	if ((amax - amin) > (bmax - bmin))
		printf("%d", amax - amin);
	else
		printf("%d", bmax - bmin);

	return 0;
}
#endif