#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int answer = rand() % 100;
    int guess;
    int tries = 0;

    do{
        printf("���ڸ� �����غ�����. (0 ~ 100) : ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer)
            printf("�Է��� ���ں��� �۽��ϴ�.\n");
        else if(guess < answer)
            printf("�Է��� ���ں��� Ů�ϴ�.\n");
        else if(guess == answer)
        {
            printf("�����Դϴ�!\n");
            printf("�õ� Ƚ�� : %d", tries);
        }
    }while(guess != answer);

    return 0;
}