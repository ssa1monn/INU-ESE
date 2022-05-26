#include <stdio.h>

int binomial_coefficient (int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
}

int main(void)
{
    int n, k;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &k);
    printf("The binomial coefficient of %d and %d is %d.\n", n, k, binomial_coefficient(n, k));
    return 0;
}