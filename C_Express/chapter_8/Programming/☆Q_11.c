#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand()
{
    return (double)rand() / RAND_MAX;
}

int main(void)
{
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++)
    {
        printf("%lf ", f_rand());
    }

    return 0;
}