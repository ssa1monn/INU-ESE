// 반감기 : 원소의 수가 절반으로 줄어드는 기간.

#include <stdio.h>

int main(void)
{
    int half_life;
    double initial = 100;
    double current = initial;
    int sum_years = 0;

    printf("반감기를 입력하십시오. : ");
    scanf("%d", &half_life);

    while(current > initial / 10)
    {
        sum_years += half_life;
        current = current / 2;
        printf("%d 년 후 남은 양 : %f\n", sum_years, current);
    }

    printf("1/10 이하로 되기까지 걸린 시간 : %d", sum_years);

    return 0;
}