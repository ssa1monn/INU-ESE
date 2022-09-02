#include <stdio.h>

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(void)
{
    int a, b;
    printf("두개의 정수를 입력하십시오. (큰 수부터) : ");
    scanf("%d %d", &a, &b);
    printf("최대 공약수는 %d 입니다.", gcd(a, b));
    return 0;
}