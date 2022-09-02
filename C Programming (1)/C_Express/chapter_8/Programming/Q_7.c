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

    printf("소득을 입력하시오 (만원) : ");
    scanf("%d", &income);

    printf("소득세는 %d만원입니다", get_tax(income));

    return 0;
}