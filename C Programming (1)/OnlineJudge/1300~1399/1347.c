// 문제 설명
// 입력받은 3개의 정수 ( > 0) 중 같은 숫자가 있으면 그 숫자를 출력하고,
// 없으면  0을 출력하시오.

// 입력
// 3 1 3

// 출력
// 3

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b || a == c || b == c)
	{
		if (a == b || a == c)
			printf("%d", a);
		else
			printf("%d", b);
	}
	else
		printf("0");

	return 0;
}