#include <stdio.h>

long factorial(int n)
{
    long result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

long combination(int n, int r)
{
    return ( factorial(n) / ( factorial(n-r) * factorial(r) ) );
}

int main(void)
{
    int n, r;

    printf("���� 2���� �Է��Ͻʽÿ�. (n, r) : ");
    scanf("%d %d", &n, &r);

    printf("C (%d, %d) = %d", n, r, combination(n, r));

    return 0;
}