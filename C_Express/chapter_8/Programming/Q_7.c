#include <stdio.h>

int get_tax(int income)
{
    int t1000, t100;

    if(income > 1000)
        return ((income - 1000) * 0.1) + 80;
    else
        return income * 0.08;
}

int main(void)
{
    int income;

    printf("�ҵ��� �Է��Ͻÿ� (����) : ");
    scanf("%d", &income);

    printf("�ҵ漼�� %d�����Դϴ�", get_tax(income));

    return 0;
}