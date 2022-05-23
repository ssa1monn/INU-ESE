#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

double sin_degree(double degree)
{
    return sin(degree * M_PI / 180.0);
}

int main(void)
{
    for(double i = 0; i <= 180; i+=10)
        printf("sin(%lf)ÀÇ °ªÀº %lf\n", i, sin_degree(i));
    
    return 0;
}