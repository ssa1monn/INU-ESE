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
        printf("숫자를 추측해보세요. (0 ~ 100) : ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer)
            printf("입력한 숫자보다 작습니다.\n");
        else if(guess < answer)
            printf("입력한 숫자보다 큽니다.\n");
        else if(guess == answer)
        {
            printf("정답입니다!\n");
            printf("시도 횟수 : %d", tries);
        }
    }while(guess != answer);

    return 0;
}