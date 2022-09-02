// 문제 설명
// 두 개의 숫자 N, M를 입력받아, N과 M의 절대값 기준에서 큰 수에서 작은 수를 뺀 값을 출력하는 프로그램을 작성하시오. 두 개의 숫자는 서로 다르다.

// 입력
// -5 3 (N, M, -INT_MAX <= N, M <= INT_MAX)

// 출력
// 2 ( |5| - |3|)

#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, num2;
	int abs1, abs2;

	scanf("%d %d", &num1, &num2);
	abs1 = abs(num1);
	abs2 = abs(num2);

	if (abs1 > abs2)
		printf("%d", abs1 - abs2);
	else if (abs1 < abs2)
		printf("%d", abs2 - abs1);

	return 0;
}