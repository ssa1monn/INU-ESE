#include <stdio.h>

int main(void)
{
    int n, r;
    int sum = 0;

    printf("n의 값 : ");
    scanf("%d", &n);

    printf("r의 값 : ");
    scanf("%d", &r);

    sum = n;

    for (int i = 1; i < r; i++)
    {
        sum = sum * (n - i);
    }

    printf("순열의 값은 %d입니다.\n", sum);

    return 0;
}