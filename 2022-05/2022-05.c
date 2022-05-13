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
    int a = 10, b = 20;
    printf("Àü ] a = %d | b = %d\n", a, b);

    //====================================

    int *pa;
    int *pb; 
    int temp;
    pa = &a;
    pb = &b;
    temp = *pa;
    *pa = *pb;
    *pb = temp;


    //====================================
    printf("ÈÄ ] a = %d | b = %d\n", a, b);
}