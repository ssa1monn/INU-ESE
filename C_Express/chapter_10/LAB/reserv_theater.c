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
        printf("�¼��� �����Ͻðڽ��ϱ�? : ");
        scanf(" %c", &ans1);

        if(ans1 == 'n')
            break;

        printf("===================\n");
        printf("A B C D E F G H I J\n");
        printf("===================\n");

        for(int i = 0; i < SIZE; i++)
            printf("%d ", seats[i]);

        printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? : ");
        scanf("%d", &ans2);
        if(seats[ans2-1] == 0)
        {
            seats[ans2-1] = 1;
            printf("����Ǿ����ϴ�.\n");
        }
        else
            printf("�̹� ����� �¼��Դϴ�.\n");
    } while(ans1 != 'n' && sum(seats) < SIZE);
    
    if(sum(seats) == SIZE)
        printf("��� �¼��� �����Ǿ����ϴ�. \n");
    
    return 0;
}