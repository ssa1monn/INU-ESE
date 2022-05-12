// 문제 설명
// 입력된 1개의 정수 ( > 9) n에 대해서, n의 십의 자리 숫자를 출력
// 하시오.

// 입력
// 99

// 출력
// 9

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", (n / 10) - ((n / 100) * 10));
	return 0;
}