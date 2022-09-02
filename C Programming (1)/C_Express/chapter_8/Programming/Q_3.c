#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

double cal_area(double radius)
{
    double area = M_PI * radius * radius;
    /* Area of circle */

    return area;
}

int main(void)
{
    double radius;
    /* Radius of circle */

    printf("원의 반지름을 입력하시오. : ");
    scanf("%lf", &radius);

    printf("원의 면적은 %lf입니다.", cal_area(radius) );

    return 0;
}