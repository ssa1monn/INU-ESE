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
    printf("�ΰ��� ������ �Է��Ͻʽÿ�. (ū ������) : ");
    scanf("%d %d", &a, &b);
    printf("�ִ� ������� %d �Դϴ�.", gcd(a, b));
    return 0;
}