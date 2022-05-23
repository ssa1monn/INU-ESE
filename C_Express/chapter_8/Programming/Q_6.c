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
    printf("������ �Է��Ͻÿ�. : ");
    scanf("%d", &n);

    printf("even�� ��� : ");
    if(even(n)) printf("¦��\n");
    else printf("Ȧ��\n");

    printf("absolute�� ��� : %d\n", absolute(n));

    printf("sign�� ��� : ");
    if(sign(n)) printf("���\n");
    else printf("����\n");

    return 0;
}