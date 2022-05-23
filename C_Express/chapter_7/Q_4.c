#include <stdio.h>

int main(void)
{
    int n = 7;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n - i; j > 0; j--)
            printf(" ");
        for(int k = i; k > 0; k--)
            printf("*");
        printf("\n");
    }

    return 0;
}