#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void)
{
    double eyeHeight, distance, degrees, radians, treeHeight;

    printf("�������� �Ÿ�(m) : ");
    scanf("%lf", &distance);

    printf("�������� Ű(m) : ");
    scanf("%lf", &eyeHeight);

    printf("����(��) : ");
    scanf("%lf", &degrees);

    radians = degrees * (M_PI / 180.0);

    treeHeight = (distance * tan(radians)) + eyeHeight;

    printf("Tree height : %lf\n", treeHeight);

    return 0;
}