#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <Windows.h>

#if 0
void sort_alpha(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void sort_int(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void)
{
    char str[11] = "JFODPSIELA";
    sort_alpha(str);
    printf("%s\n", str);
}
#endif

int n;

#if 0
void alpha(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
             str[i] = toupper(str[i]);
    }
}

int main(void)
{
    printf("Enter a number: ");
    scanf("%d", &n);

    char str[100][100] = { 0,};
    char temp[100] = { 0, };

    for(int k = 0; k < n; k++)
    {
        printf("Enter a string: ");
        scanf("%s", &str[k]);
        strcpy(temp, str[k]);

        alpha(temp);
        strcpy(str[k], temp);
    }
    for(int m = 0; m < n; m++)
        printf("%s\n", str[m]);
    return 0;
}
#endif

#if 1
int main(void)
{
    int arr[10];
    printf("Enter a number: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#endif