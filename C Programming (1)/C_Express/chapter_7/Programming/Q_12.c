#include <stdio.h>

int main(void)
{
    int n;

    int a1 = 0;
    int a2 = 1;

    int sum = 0;

    printf("�� ��° �ױ��� ���ұ��? : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("0, ");
            continue;
        }
        else if (i == 1)
        {
            printf("1, ");
            continue;
        }
        
        sum = a1 + a2;
        a1 = a2;
        a2 = sum;

        printf("%d, ", sum);
    }

    return 0;
}