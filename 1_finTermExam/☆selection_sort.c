#include <stdio.h>

#define SIZE 10

int main(void)
{
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    int min, temp;

    for(int i = 0; i < SIZE; i++)
    {
        min = i;
        for(int j = i + 1; j < SIZE; j++)
            if(list[min] > list[j])
                min = j;
        
        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }

    for(int k = 0; k < SIZE; k++)
        printf("%d ", list[k]);

    return 0;
}