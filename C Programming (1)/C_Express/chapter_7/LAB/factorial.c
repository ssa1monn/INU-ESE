#include <stdio.h>

int main(void)
{
    int fact = 1;
    int n;

    printf("정수를 입력하세요. : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact = fact * i;

    printf("%d! 는 %d 입니다.\n", n, fact);
    
    return 0;
}