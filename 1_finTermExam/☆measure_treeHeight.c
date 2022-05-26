#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void)
{
    double eyeHeight, distance, degrees, radians, treeHeight;

    printf("나무와의 거리(m) : ");
    scanf("%lf", &distance);

    printf("측정자의 키(m) : ");
    scanf("%lf", &eyeHeight);

    printf("각도(도) : ");
    scanf("%lf", &degrees);

    radians = degrees * (M_PI / 180.0);

    treeHeight = (distance * tan(radians)) + eyeHeight;

    printf("Tree height : %lf\n", treeHeight);

    return 0;
}