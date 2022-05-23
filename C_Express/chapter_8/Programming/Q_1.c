#include <stdio.h>
#include <math.h>

double square(double x)
{
    double result;
    result = x * x;
    return result;
}

int main(void)
{
    double x;
    printf("정수를 입력하시오. : ");
    scanf("%lf", &x);

    printf("주어진 정수 %lf의 제곱은 %lf입니다.", x, square(x));

    return 0;
}