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
    printf("���ĺ��� �Է��Ͻʽÿ�. : ");
    scanf("%c", &alpha);

    if(check_alpha(alpha) == 1)
        printf("%c �� ���ĺ��Դϴ�.", alpha);
    else if(check_alpha(alpha) == 0)
        printf("%c �� ���ĺ��� �ƴմϴ�.", alpha);

    return 0;
}