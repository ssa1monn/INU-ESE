#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int main(void)
{
    char A[9] = { 0 };
    char B[9] = { 0 };
    scanf("%[^ ]s", A);
    scanf("%s", B);
 
    char* p = strstr(A, B);
    if (strstr(A, B) == NULL)
    {
        printf("0");
        return 0;
    }
     
    int idx = pow(10, strlen(A) - (p - A) - 1);
    printf("%d", idx);
 
    return 0;
}