// 문제 설명
// 두 개의 정수 N, M을 입력받아 큰 수에서 작은 수를 뺀 값을 출력하는 프로그램을 작성하시오. 

// 입력
// 2 5 (N, M -INT_MAX <= N, M <= INT_MAX)

// 출력
// 3

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int max, min;

	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		max = num2, min = num1;
	else
		max = num1, min = num2;

	printf("%d", max - min);

	return 0;
}