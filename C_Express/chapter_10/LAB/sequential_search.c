#include <stdio.h>

#define SIZE 10

int main(void)
{
    int key;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("Ž���� ���� �Է��ϼ���. : ");
    scanf("%d", &key);

    for (int i = 0; i < SIZE; i++)
        if (list[i] == key)
        {
            printf("%d �� %d ��°�� �ֽ��ϴ�.", key, i+1);
            break;
        }
    
    return 0;
}