#include <stdio.h>

int print_menu(void)
{
    int select;

    printf("==========\n");
    printf("MENU\n");
    printf("==========\n");
    printf("1. 덧셈\n");
    printf("2. 뺄셈\n");
    printf("3. 곱셈\n");
    printf("4. 나눗셈\n");
    printf("5. 나머지\n");

    printf("원하는 메뉴를 선택하시오. (1~5) : ");
    scanf("%d", &select);

    return select;
}

int keep_continue()
{
    char resume;
    printf("계속하려면 y를 누르시오 : ");
    scanf(" %c", &resume);
    if (resume == 'y')
        return 1;
    return 0;   
}

int intadd(int a, int b)
{
    return a + b;
}

int intsub(int a, int b)
{
    return a - b;
}

int intmul(int a, int b)
{
    return a * b;
}

int intdiv(int a, int b)
{
    return a / b;
}

int intmod(int a, int b)
{
    return a % b;
}

void do_math(int select, int a, int b)
{
    switch (select)
        {
        case 1:
            printf("연산결과 : %d\n", intadd(a, b));
            break;
        case 2:
            printf("연산결과 : %d\n", intsub(a, b));
            break;
        case 3:
            printf("연산결과 : %d\n", intmul(a, b));
            break;
        case 4:
            printf("연산결과 : %d\n", intdiv(a, b));
            break;
        case 5:
            printf("연산결과 : %d\n", intmod(a, b));
            break;
        default:
            break;
        }
}

int main(void)
{
    int select;
    int a, b;
    char resume;

    for(;;)
    {
        retry:
        select = print_menu();

        if(select < 1 || select > 5)
        {
            printf("잘못된 입력입니다. 다시 시도하세요. \n");
            goto retry;
        }

        printf("숫자 2개를 입력하시오. : ");
        scanf("%d %d", &a, &b);

        do_math(select, a, b);

        if(keep_continue() != 1)
            break;
    }

    return 0;
}