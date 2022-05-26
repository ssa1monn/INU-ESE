#include <stdio.h>

#define SIZE 10

int sum(int a[])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += a[i];
    return sum;
}

int main(void)
{
    char ans1;
    int ans2;
    int seats[SIZE] = {0};

    do
    {
        printf("좌석을 예약하시겠습니까? : ");
        scanf(" %c", &ans1);

        if(ans1 == 'n')
            break;

        printf("===================\n");
        printf("A B C D E F G H I J\n");
        printf("===================\n");

        for(int i = 0; i < SIZE; i++)
            printf("%d ", seats[i]);

        printf("몇 번째 좌석을 예약하시겠습니까? : ");
        scanf("%d", &ans2);
        if(seats[ans2-1] == 0)
        {
            seats[ans2-1] = 1;
            printf("예약되었습니다.\n");
        }
        else
            printf("이미 예약된 좌석입니다.\n");
    } while(ans1 != 'n' && sum(seats) < SIZE);
    
    if(sum(seats) == SIZE)
        printf("모든 좌석이 매진되었습니다. \n");
    
    return 0;
}