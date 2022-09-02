// 문제 설명
// 입력 정수 1개에 대해서,
// 양수거나 0이면 그대로 출력하고,
// 음수면 절대값을 취해 양수로 변환하여 출력하시오.

// 입력
// -10

// 출력
// 10

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if (n < 0)
		printf("%d", -n);
	else
		printf("%d", n);

	return 0;
}