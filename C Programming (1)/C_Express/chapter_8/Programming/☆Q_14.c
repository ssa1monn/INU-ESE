#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(void)
{
    double x1, y1, x2, y2;

    printf("첫번째 점의 좌표를 입력하시오 (x, y) : ");
    scanf("%lf %lf", &x1, &y1);

    printf("두번째 점의 좌표를 입력하시오 (x, y) : ");
    scanf("%lf %lf", &x2, &y2);

    printf("두 점 사이의 거리는 %lf입니다.", get_distance(x1, y1, x2, y2));

    return 0;
}