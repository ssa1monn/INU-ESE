#include <stdio.h>

int is_multiple(int n, int m)
{
    return n % m == 0;
}

int main(void)
{
    int n, m;
    printf("ù��° ������ �Է��Ͻÿ�. : ");
    scanf("%d", &n);
    
    printf("�ι�° ������ �Է��Ͻÿ�. : ");
    scanf("%d", &m);

    if (is_multiple(n, m))
        printf("%d�� %d�� ����Դϴ�.", n, m);
    else
        printf("%d�� %d�� ����� �ƴմϴ�.", n, m);
    
    return 0;
}