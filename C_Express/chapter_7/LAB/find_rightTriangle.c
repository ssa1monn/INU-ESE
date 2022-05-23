#include <stdio.h>

int main(void)
{ 
    for (int a = 1; a <= 100; a++)
        for (int b = 1; b <= 100; b++)
            for (int c = 1; c <= 100; c++)
                if(a*a + b*b == c*c)
                    printf("%d %d %d\n", a, b, c);

    return 0;
}