#include <stdio.h>

int main(void)
{
	double s, a, r; // s �ɾ �Ÿ� a �߽ɰ��� r ������
	scanf("%lf %lf", &s, &a);

	r = s / (2 * 3.14 * (a / 360));

	printf("%lf", r);
	return 0;
}