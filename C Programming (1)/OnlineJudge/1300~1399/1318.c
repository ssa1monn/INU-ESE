// 문제 설명
// 입력된 1개의 정수 ( > 0)가 짝수면 'even'을 출력, 홀수면 'odd'를 출력하시오.

// 입력
// 2

// 출력
// even

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if (val % 2 == 0)
		printf("even");
	else
		printf("odd");

	return 0;
}