// 문제 설명
// 입력된 1개의 정수 ( > 0)의 10의 자리숫자가 3이면 'ok'를 출력, 아니면 'nok'를 출력하시오.

// 입력
// 131

// 출력
// ok

#include <stdio.h>

int main(void)
{
	int val;
	int val10;

	scanf("%d", &val);

	val10 = (val / 10) % 10;

	if (val10 == 3)
		printf("ok");
	else
		printf("nok");

	return 0;
}