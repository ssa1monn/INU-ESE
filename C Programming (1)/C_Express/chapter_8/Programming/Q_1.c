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
    printf("������ �Է��Ͻÿ�. : ");
    scanf("%lf", &x);

    printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", x, square(x));

    return 0;
}