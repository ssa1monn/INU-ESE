#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; sum < 10000; i++)
    {
        sum += i;
        if (sum > 10000)
        {
            sum -= i;
            i--;
            break;
        }
    }

    printf("1부터 %d까지의 합이 %d 입니다.\n", i, sum);

    return 0;
}