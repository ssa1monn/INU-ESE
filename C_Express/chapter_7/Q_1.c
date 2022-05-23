#include <stdio.h>

int main(void)
{
    int n;
    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d ", i);
    }
    printf("\a");

    return 0;
}