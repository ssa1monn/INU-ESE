#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
        height = 0;
        printf("������ ���� (���� : -1) : ");
        scanf("%d", &height);

        if(height == -1)
            break;

        for(int i = 0; i < height; i++)
            printf("*");
        printf("\n");

    } while (height != -1);
    
}