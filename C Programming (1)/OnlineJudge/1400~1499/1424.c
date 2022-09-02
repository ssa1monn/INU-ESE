#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[60] = { 0, };
    char arrRev[60] = { 0, };

    scanf("%s", arr);

    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        arrRev[i] = arr[n - 1 - i];
    }

    printf("%s", arrRev);

    return 0;
}