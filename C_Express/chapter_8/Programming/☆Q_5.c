#include <stdio.h>

int round(double x)
{
    return (int)(x + 0.5);
}

int main(void)
{
    double x;
    printf("�Ǽ��� �Է��Ͻÿ�. : ");
    scanf("%lf", &x);
    
    int result = round(x);
    printf("\nResult: %d\n", result);

    return 0;
}