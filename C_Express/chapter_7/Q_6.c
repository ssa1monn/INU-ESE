#include <stdio.h>

int main(void)
{
    char select;
    int a, b, result;

    printf("***************\n");
    printf("A ---- Add\n");
    printf("S ---- Subtract\n");
    printf("M ---- Multiply\n");
    printf("D ---- Divide\n");
    printf("Q ---- Quit\n");
    printf("***************\n");

    do
    {
        printf("연산을 선택하시오 : ");
        scanf(" %c", &select);

        switch (select)
        {
        case 'A':
            printf("두 수를 공백으로 분리하여 입력하시오 : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a + b);
            break;
        case 'S':
            printf("두 수를 공백으로 분리하여 입력하시오 : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a - b);
            break;
        case 'M':
            printf("두 수를 공백으로 분리하여 입력하시오 : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a * b);
            break;
        case 'D':
            printf("두 수를 공백으로 분리하여 입력하시오 : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a / b);
            break;
        case 'Q':
            break;
        default:
            break;
        }

    } while (select != 'Q');
    
    return 0;
}