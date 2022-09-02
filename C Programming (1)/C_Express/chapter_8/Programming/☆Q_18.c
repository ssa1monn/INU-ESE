#include <stdio.h>

int print_menu(void)
{
    int select;

    printf("==========\n");
    printf("MENU\n");
    printf("==========\n");
    printf("1. ����\n");
    printf("2. ����\n");
    printf("3. ����\n");
    printf("4. ������\n");
    printf("5. ������\n");

    printf("���ϴ� �޴��� �����Ͻÿ�. (1~5) : ");
    scanf("%d", &select);

    return select;
}

int keep_continue()
{
    char resume;
    printf("����Ϸ��� y�� �����ÿ� : ");
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
            printf("������ : %d\n", intadd(a, b));
            break;
        case 2:
            printf("������ : %d\n", intsub(a, b));
            break;
        case 3:
            printf("������ : %d\n", intmul(a, b));
            break;
        case 4:
            printf("������ : %d\n", intdiv(a, b));
            break;
        case 5:
            printf("������ : %d\n", intmod(a, b));
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
            printf("�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���. \n");
            goto retry;
        }

        printf("���� 2���� �Է��Ͻÿ�. : ");
        scanf("%d %d", &a, &b);

        do_math(select, a, b);

        if(keep_continue() != 1)
            break;
    }

    return 0;
}