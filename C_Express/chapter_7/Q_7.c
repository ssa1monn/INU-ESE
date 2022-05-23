#include <stdio.h>

int main(void)
{
    for (int i = 2; i <= 100; i++)
    {
        int divCount = 0;

        for(int d = 2; d < i; d++)
        {
            if (i % d == 0)
            {
                divCount++;
            }
        }

        if(divCount == 0)
            printf("%d ", i);
    }

    return 0;
}