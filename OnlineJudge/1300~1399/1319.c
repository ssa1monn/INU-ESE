// 문제 설명
// 입력된 1개의 정수 (>0)가 짝수이면서 10보다 크면 'ok', 아니면 'nok'를 출력하시오.

// 입력
// 12

// 출력
// ok

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if ((val % 2 == 0) && (val > 10))
		printf("ok");
	else
		printf("nok");

	return 0;
}