#include <stdio.h>
#include <math.h>

int check_alpha(char alpha)
{
    if(alpha >= 'a' && alpha <= 'z')
        return 1;
    else
        return 0;
}

int main(void)
{
    char alpha;
    printf("알파벳을 입력하십시오. : ");
    scanf("%c", &alpha);

    if(check_alpha(alpha) == 1)
        printf("%c 는 알파벳입니다.", alpha);
    else if(check_alpha(alpha) == 0)
        printf("%c 는 알파벳이 아닙니다.", alpha);

    return 0;
}