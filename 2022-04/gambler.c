#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int initial_money = 50;
    int goal = 250;
    int i;
    int wins = 0;

    for(i = 0; i < 100; i++)
    {
        int cash = initial_money;
        while (cash > 0 && cash < goal)
        {
            if ( ((double)rand() / RAND_MAX ) < 0.5 )
                cash++;
            else
                cash--;
        }

        if (cash == goal)
            wins++;
    }
        printf("INITIAL_MONEY : %d\n", initial_money);
        printf("GOAL : %d\n", goal);
        printf("100 번 중에서 %d 번 성공", wins);

        return 0;
}   