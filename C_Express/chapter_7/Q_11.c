#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("n�� ���� �Է��Ͻÿ�. : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
        sum += i * i;

    printf("��갪�� %d �Դϴ�.", sum);

    return 0;    
}