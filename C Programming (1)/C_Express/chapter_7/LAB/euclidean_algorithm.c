// 유클리드 호제법 : 2개의 자연수의 최대공약수를 구하는 알고리즘.
// 두 수 가운데 큰 수를 x, 작은 수를 y라 한다.
// y == 0 이면 최대공약수는 x와 같음
// r = x % y
// x = y
// y = r ;; 이후 반복

#include <stdio.h>

int main(void)
{
    int x, y, r;

    printf("두개의 정수를 입력하십시오. (큰 수부터) : ");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("최대 공약수는 %d 입니다.", x);

    return 0;
}