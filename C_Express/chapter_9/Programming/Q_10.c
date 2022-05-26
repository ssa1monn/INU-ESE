#include <stdio.h>

double sumDivide (double n)
{
    if (n == 1)
        return 1.0;
    else
        return 1.0 / n + sumDivide(n - 1.0);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the divisors of %d is %lf.\n", n, sumDivide(n));
    return 0;
}