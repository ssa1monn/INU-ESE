#include <stdio.h>
#include <math.h>

int even(int n)
{
    return (n % 2) == 0;
}

int absolute(int n)
{
    if(n >= 0)
        return n;
    else
        return -n;
}

int sign(int n)
{
    return n > 0 ? 1 : 0;
}

int main(void)
{
    int n;
    printf("정수를 입력하시오. : ");
    scanf("%d", &n);

    printf("even의 결과 : ");
    if(even(n)) printf("짝수\n");
    else printf("홀수\n");

    printf("absolute의 결과 : %d\n", absolute(n));

    printf("sign의 결과 : ");
    if(sign(n)) printf("양수\n");
    else printf("음수\n");

    return 0;
}