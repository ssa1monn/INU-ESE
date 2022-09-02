#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random (void)
{
    static int count = 0;
    if (count == 0)
    {
        srand(time(NULL));
        printf("초기화 실행.\n");
        count = 1;
    }
    else
        printf("%d\n", rand());
}

int main(void)
{
    get_random();
    get_random();
    get_random();
    return 0;
}