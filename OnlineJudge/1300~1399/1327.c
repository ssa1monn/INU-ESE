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
	int num;

	scanf("%d", &num);

	int num10 = ((num / 10) % 10);

	printf("%d", num10);

	return 0;
}