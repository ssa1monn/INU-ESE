#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand()
{
    return rand() % 2;
}

int main(void)
{
    srand(time(NULL));

    for (int i = 0; i <5; i++)
    {
        printf("%d ", b_rand());
    }
    return 0;
}