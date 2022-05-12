// 문제 설명
// 1개의 정수 n ( > 9)을 입력받아 n의 십의 자리의 숫자를 출력하시오.
// (출력 끝에 줄바꿈 표시 없음)

// 입력
// 12

// 출력
// 1

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", (a / 10) - ((a / 100) * 10));
	return 0;
}