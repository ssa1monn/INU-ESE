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
        printf("������ �����Ͻÿ� : ");
        scanf(" %c", &select);

        switch (select)
        {
        case 'A':
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a + b);
            break;
        case 'S':
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a - b);
            break;
        case 'M':
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
            scanf("%d %d", &a, &b);
            printf("%d\n", a * b);
            break;
        case 'D':
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
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