#include <stdio.h>

int round(double x)
{
    return (int)(x + 0.5);
}

int main(void)
{
    double x;
    printf("실수를 입력하시오. : ");
    scanf("%lf", &x);
    
    int result = round(x);
    printf("\nResult: %d\n", result);

    return 0;
}