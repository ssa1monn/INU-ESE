#include <stdio.h>

void save(int amount)
{
    static long balace = 0;

    if(amount >= 0)
        printf("%d \t\t ", amount);
    else
        printf("\t %d \t", -amount);

    balace += amount;

    printf("%d \n", balace);
}

int main(void)
{
    printf("====================\n");
    printf("입금 \t출금\t 잔고\n");
    printf("====================\n");

    save(10000);
    save(50000);
    save(-10000);
    save(30000);

    printf("====================\n");
    return 0;
}