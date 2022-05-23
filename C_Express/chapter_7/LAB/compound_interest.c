//복리 이자 계산

#include <stdio.h>

#define INVESTMENT 1000000
#define RATE 0.07
#define YEARS 10

int main(void)
{
    double total = INVESTMENT;

    for(int i = 1; i <= YEARS; i++)
    {
        total = total * (1 + RATE);
        printf("%2d 년\t %10.1f 원 \n", i, total);
    }

    return 0;
}