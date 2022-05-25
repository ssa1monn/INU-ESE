#include <stdio.h>

#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536;

static unsigned int seed = SEED;

unsigned random_i(void)
{
    seed = (MULT*seed + INC) % MOD;
    return seed; 
}

double random_f(void)
{
    seed = (MULT*seed + INC) % MOD;
    return seed / (double) MOD;
}

int main(void)
{
    int i;

    MOD = 10;
    for (i = 0; i < 10; i++)
        printf("%d ", random_i());

    return 0;
}