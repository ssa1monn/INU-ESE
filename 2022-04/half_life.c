// �ݰ��� : ������ ���� �������� �پ��� �Ⱓ.

#include <stdio.h>

int main(void)
{
    int half_life;
    double initial = 100;
    double current = initial;
    int sum_years = 0;

    printf("�ݰ��⸦ �Է��Ͻʽÿ�. : ");
    scanf("%d", &half_life);

    while(current > initial / 10)
    {
        sum_years += half_life;
        current = current / 2;
        printf("%d �� �� ���� �� : %f\n", sum_years, current);
    }

    printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� : %d", sum_years);

    return 0;
}