// 문제 설명
// 두 개의 숫자를 입력받아 첫 번째 숫자에서 두 번째 숫자를 뺀 값을 출력

// 입력
// 3 4

// 출력
// -1

#include <stdio.h>

int main(void)
{
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	printf("%d", val1 - val2);
	return 0;
}