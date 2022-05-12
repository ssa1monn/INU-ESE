// 문제 설명
// 양의 정수 ( > 0) 2개를 입력받아 최소공배수를 출력하시오. 
// 주의. 출력의 끝에 줄바꿈표시 없음.

// 입력
// 6 8

// 출력
// 24

#include <stdio.h>

int main(void)
{
	int a, b, gcd;
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a && i <= b; i++)
		if (a % i == 0 && b % i == 0)
			gcd = i;

	printf("%d", a * b / gcd);

	return 0;
}