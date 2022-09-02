// 문제 설명
// 입력된 3개의 정수 ( > 0)를 A, B, C라고 할 때, 
// C가 A와 B의 공배수이면 'ok'를 출력하고,
// 아니면 'nok'를 출력하시오.

// 입력
// 4 6 24

// 출력
// ok

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c % a == 0 && c % b == 0)
		printf("ok");
	else
		printf("nok");
	return 0;
}