//���� ���� ���

#include <stdio.h>

#define INVESTMENT 1000000
#define RATE 0.07
#define YEARS 10

int main(void)
{
    double total = INVESTMENT;

    for(int i = 1; i <= YEARS; i++)
    {
        total = total * (1 + RATE);
        printf("%2d ��\t %10.1f �� \n", i, total);
    }

    return 0;
}