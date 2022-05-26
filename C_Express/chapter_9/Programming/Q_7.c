#include <stdio.h>

void show_digit(int n)
{
    if (n == 0)
        return;
    else
    {
        show_digit(n / 10);
        printf("%d ", n % 10);
    }
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    show_digit(n);
    return 0;
}