#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int freq[6] = {0};
    srand(time(NULL));
    
    for(int i = 0; i < 10000; i++)
        ++freq[rand() % 6];

    printf("=================\n");
    printf("¸é\tºóµµ¼ö\n");
    printf("=================\n");

    for(int i = 0; i < 6; i++)
        printf("%d\t%d\n", i + 1, freq[i]);

    return 0;
}