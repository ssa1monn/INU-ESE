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

    printf("���� �������� �Է��Ͻÿ�. : ");
    scanf("%lf", &radius);

    printf("���� ������ %lf�Դϴ�.", cal_area(radius) );

    return 0;
}