#include <stdio.h>

long power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main(void)
{
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %ld\n", base, exponent, power(base, exponent));
    return 0;
}