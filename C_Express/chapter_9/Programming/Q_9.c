#include <stdio.h>

int sumDigits (int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sumDigits(n / 10);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the digits in %d is %d.\n", n, sumDigits(n));
    return 0;
}