#include <stdio.h>

void print_value(int value)
{
    int i = value;
    for (i; i > 0; i--)
        printf("*");
    printf("\n");
}

int main(void)
{
    int value;

    for(;;)
    {
        printf("���� �Է��Ͻÿ�(����� ����) : ");
        scanf("%d", &value);
        if(value < 0)
            break;
        print_value(value);
    }

    return 0;
}