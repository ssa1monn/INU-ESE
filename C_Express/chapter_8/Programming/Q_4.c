#include <stdio.h>

int is_leap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int year;
    printf("연도를 입력하시오. :");
    scanf("%d", &year);

    if (is_leap(year) == 0)
        printf("%d년은 365일입니다.", year);
    else if (is_leap(year) == 1)
        printf("%d년은 366일입니다.", year);

    return 0;
}