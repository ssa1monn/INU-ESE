#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int get_min(int a[])
{
    int min = a[0];
    for(int j = 0; j < SIZE; j++)
    {
        if (min > a[j])
            min = a[j];
    }
    return min;
}

int main(void)
{
    int arr[SIZE];
    srand(time(NULL));

    printf("===========================================================================\n");
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
    printf("===========================================================================\n");
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand()%100 + 1;
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("최솟값은 %d입니다.", get_min(arr));

    return 0;
}