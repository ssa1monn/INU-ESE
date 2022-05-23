#include <stdio.h>

int is_prime(int num)
{
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 1;

    return 0;
}

int main(void)
{
    for(int i = 2; i <= 100; i++)
        if(is_prime(i) == 0)
            printf("%d ", i);
        else
            continue;

    return 0;
}