#include <stdio.h>

int get_line_parameter (int x1, int y1, int x2, int y2, double *slope, double *yintercept)
{
    if (x1 == x2)
        return -1;
    else
    {
        *slope = (y2 - y1) / (x2 - x1);
        *yintercept = y1 - (*slope) * x1;
        return 0;
    }
}

int main(void)
{
    double slope, yintercept;

    get_line_parameter(3, 3, 6, 6, &slope, &yintercept);
    printf("기울기는 %lf, y절편은 %lf\n", slope, yintercept);

    return 0;
}