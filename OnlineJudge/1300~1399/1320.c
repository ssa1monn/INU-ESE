// 문제 설명
// 입력된 1개의 정수 ( > 0)이 홀수이면서 10보다 크거나 같고, 100보다 작거나 같으면 'ok',
// 아니면 'nok'를 출력하시오.

// 입력
// 13

// 출력
// ok

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if ((val % 2 != 0) && (val >= 10) && (val <= 100))
		printf("ok");
	else
		printf("nok");

	return 0;
}