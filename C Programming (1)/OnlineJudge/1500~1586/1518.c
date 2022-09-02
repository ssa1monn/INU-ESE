#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[100] = { 0, };
    char B[100] = { 0, };

    scanf("%s", A);
    scanf(" %s", B);

    int nA = strlen(A);
    int nB = strlen(B);

    for(int i = 0; i < nB; i ++)
        for(int m = 0; m < nA; m++)
            if(A[m] == B[i])
                A[m] = '_';

    printf("%s", A);
    
    return 0;
}