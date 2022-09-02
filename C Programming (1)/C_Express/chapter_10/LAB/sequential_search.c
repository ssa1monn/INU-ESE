#include <stdio.h>

#define SIZE 10

int main(void)
{
    int key;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("탐색할 값을 입력하세요. : ");
    scanf("%d", &key);

    for (int i = 0; i < SIZE; i++)
        if (list[i] == key)
        {
            printf("%d 는 %d 번째에 있습니다.", key, i+1);
            break;
        }
    
    return 0;
}