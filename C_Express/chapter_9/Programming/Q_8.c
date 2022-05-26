#include <stdio.h>

int findDigit (int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + findDigit(n / 10);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number of digits in %d is %d.\n", n, findDigit(n));
    return 0;
}