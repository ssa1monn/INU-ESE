#include <stdio.h>

int main(void)
{
    int n, r;
    int sum = 0;

    printf("n�� �� : ");
    scanf("%d", &n);

    printf("r�� �� : ");
    scanf("%d", &r);

    sum = n;

    for (int i = 1; i < r; i++)
    {
        sum = sum * (n - i);
    }

    printf("������ ���� %d�Դϴ�.\n", sum);

    return 0;
}