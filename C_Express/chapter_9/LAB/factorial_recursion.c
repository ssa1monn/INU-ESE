#include <stdio.h>

long factorial_recursion(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial_recursion(n - 1);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n", n, factorial_recursion(n));
    return 0;
}