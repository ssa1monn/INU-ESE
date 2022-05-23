#include <stdio.h>

double factorial(int n)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main(void)
{
    int n;
    double sum = 1.0;
    printf("������ ����ұ��? : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (1 / factorial(i));
    }

    printf("���Ϸ��� ���� %lf �Դϴ�.", sum);

    return 0;
}