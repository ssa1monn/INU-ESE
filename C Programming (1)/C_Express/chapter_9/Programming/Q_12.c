#include <stdio.h>

int fibonacci (int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is %d.\n", n, fibonacci(n));
    return 0;
}