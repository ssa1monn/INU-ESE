// 문제 설명
// 입력되는 2개의 정수 중 큰 수를 출력하시오.
// 두 숫자가 같은 경우는 없다.

// 입력
// 3 5

// 출력
// 5

#include <stdio.h>

int main(void)
{
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	if (val1 > val2)
		printf("%d", val1);
	else
		printf("%d", val2);
	return 0;
}