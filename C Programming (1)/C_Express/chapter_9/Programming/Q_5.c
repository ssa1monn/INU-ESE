#include <stdio.h>

int sum(int a)
{
    if (a == 0)
        return 0;
    else
        return a + sum(a - 1);
}

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The sum of the numbers from 1 to %d is %d.\n", a, sum(a));
    return 0;
}