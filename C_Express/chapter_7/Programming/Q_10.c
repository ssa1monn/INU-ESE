#include <stdio.h>

int main(void)
{
    int n;
    double r;
    double sum;

    printf("�Ǽ��� ���� �Է��Ͻÿ�. : ");
    scanf("%lf", &r);

    sum = r;

    printf("�ŵ����� Ƚ���� �Է��Ͻÿ�. : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        sum = sum * r;
    
    printf("������� %lf", sum);

    return 0;
}