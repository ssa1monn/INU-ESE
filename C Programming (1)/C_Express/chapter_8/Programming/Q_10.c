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
        printf("�ո� �Ǵ� �޸� (1 �Ǵ� 0) : ");
        scanf("%d", &select);
        if (select == coin)
            printf("�¾ҽ��ϴ�.\n");
        else
            printf("Ʋ�Ƚ��ϴ�.\n");

        printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
        scanf(" %c", &restart);

        if(restart == 'n')
            break;
    }

    return 0;
}