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

    printf("�Ǽ��� �Է��Ͻÿ�. : ");
    scanf("%lf", &a);

    printf("�Ǽ��� �Է��Ͻÿ�. : ");
    scanf("%lf", &b);

    printf("%lf\n", f_abs(a - b) / f_min(a, b) );
    printf("%d\n", ( f_abs(a - b) / f_min(a, b) ) < e );

    if(f_equal(a,b))
        printf("�� ���� �Ǽ��� ���� ����");
    else
        printf("�� ���� �Ǽ��� ���� �ٸ�");

    return 0;
}