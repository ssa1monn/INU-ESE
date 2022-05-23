#include <stdio.h>

int main(void)
{
	double s, a, r; // s 걸어간 거리 a 중심각도 r 반지름
	scanf("%lf %lf", &s, &a);

	r = s / (2 * 3.14 * (a / 360));

	printf("%lf", r);
	return 0;
}