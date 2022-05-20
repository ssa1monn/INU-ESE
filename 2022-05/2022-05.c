#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;

    printf("%p %p %d %d", p, &p, *p, *(p+1));

    return 0;
}