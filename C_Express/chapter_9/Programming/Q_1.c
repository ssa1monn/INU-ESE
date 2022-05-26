#include <stdio.h>

int addcount = 0;
int subcount = 0;
int mulcount = 0;
int divcount = 0;

void add (int a, int b)
{
    addcount++;
    printf("µ¡¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù. \n" , addcount);
    printf("%d + %d = %d\n", a, b, a + b);
}

void sub (int a, int b)
{
    subcount++;
    printf("»¬¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù. \n" , subcount);
    printf("%d - %d = %d\n", a, b, a - b);
}

void mul (int a, int b)
{
    mulcount++;
    printf("°ö¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù. \n" , mulcount);
    printf("%d * %d = %d\n", a, b, a * b);
}

void div (int a, int b)
{
    divcount++;
    printf("³ª´°¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù. \n" , divcount);
    printf("%d / %d = %d\n", a, b, a / b);
}

int main(void)
{
    int a, b;
    char c;
    do
    {
        printf("¿¬»êÀ» ÀÔ·ÂÇÏ½Ã¿À. : ");
        scanf("%d %c %d", &a, &c, &b);
        switch (c)
        {
            case '+':
                add(a, b);
                break;
            case '-':
                sub(a, b);
                break;
            case '*':
                mul(a, b);
                break;
            case '/':
                div(a, b);
                break;
            default:
                printf("Invalid operator.\n");
                break;
        }
    } while(c == '+' || c == '-' || c == '*' || c == '/');

    return 0;
}