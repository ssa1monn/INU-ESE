#include <stdio.h>

int main(void)
{
    int n;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &n);
    
    printf("��� : ");
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }

    return 0;
}