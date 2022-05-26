#include <stdio.h>

void hanoi_tower (int n, char from, char temp, char to)
{
    if (n == 1)
        printf("%d : %c -> %c\n", n, from, to);
    else
    {
        hanoi_tower(n - 1, from, to, temp);
        printf("%d : %c -> %c\n", n, from, to);
        hanoi_tower(n - 1, temp, from, to);
    }
}

int main(void)
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    hanoi_tower(n, 'A', 'B', 'C');
    return 0;
}