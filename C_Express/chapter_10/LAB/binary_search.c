#include <stdio.h>

#define SIZE 16

int binary_search(int list[], int key)
{
    int low = 0;
    int high = SIZE - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (list[mid] == key)
            return mid + 1;
        else if (list[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int key;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    printf("Ž���� ���� �Է��Ͻÿ�. : ");
    scanf("%d", &key);
    printf("%d �� %d ��°�� �ֽ��ϴ�.", key, binary_search(list, key));
}