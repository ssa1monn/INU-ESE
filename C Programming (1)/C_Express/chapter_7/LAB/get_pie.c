#include <stdio.h>

int main(void)
{
    double divisor = 1;
    double divident = 4;
    double sum = 0;
    int loopcount = 0;
    
    printf("¹Ýº¹ È½¼ö : ");
    scanf("%d", &loopcount);

    while(loopcount > 0)
    {
        sum = sum + divident / divisor;
        divident = divident * -1;
        divisor = divisor + 2;
        loopcount--;
    }

    printf("PI = %f\n", sum);
    return 0;
}