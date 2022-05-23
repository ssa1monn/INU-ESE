#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void)
{
    return rand() % 2;
}

int main(void)
{
    for(;;)
    {
        int coin = b_rand();
        int select;
        int restart;
        printf("앞면 또는 뒷면 (1 또는 0) : ");
        scanf("%d", &select);
        if (select == coin)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");

        printf("계속하시겠습니까? (y 또는 n) : ");
        scanf(" %c", &restart);

        if(restart == 'n')
            break;
    }

    return 0;
}