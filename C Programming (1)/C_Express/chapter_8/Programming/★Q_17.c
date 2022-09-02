#include <stdio.h>

#define e 0.000001

double f_abs(double x)
{
    return (x >= 0 ? x : -x);
}

double f_min(double a, double b)
{
    return (f_abs(a) <= f_abs(b) ? f_abs(a) : f_abs(b));
}

int f_equal(double a,double b)
{
    return ( f_abs(a - b) / f_min(a, b) ) < e;
}

int main(void)
{
    double a, b;

    printf("실수를 입력하시오. : ");
    scanf("%lf", &a);

    printf("실수를 입력하시오. : ");
    scanf("%lf", &b);

    printf("%lf\n", f_abs(a - b) / f_min(a, b) );
    printf("%d\n", ( f_abs(a - b) / f_min(a, b) ) < e );

    if(f_equal(a,b))
        printf("두 개의 실수는 서로 같음");
    else
        printf("두 개의 실수는 서로 다름");

    return 0;
}