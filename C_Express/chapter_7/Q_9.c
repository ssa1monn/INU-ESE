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

    printf("1���� %d������ ���� %d �Դϴ�.\n", i, sum);

    return 0;
}