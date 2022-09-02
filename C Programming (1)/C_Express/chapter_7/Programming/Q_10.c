#include <stdio.h>

int main(void)
{
    int n;
    double r;
    double sum;

    printf("실수의 값을 입력하시오. : ");
    scanf("%lf", &r);

    sum = r;

    printf("거듭제곱 횟수를 입력하시오. : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        sum = sum * r;
    
    printf("결과값은 %lf", sum);

    return 0;
}