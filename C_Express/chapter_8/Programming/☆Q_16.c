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
    printf("어디까지 계산할까요? : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (1 / factorial(i));
    }

    printf("오일러의 수는 %lf 입니다.", sum);

    return 0;
}