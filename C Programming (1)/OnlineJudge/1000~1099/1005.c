// 문제 설명
// 두 정수의 합을 출력하는 프로그램을 작성하시오.

// 입력
// 두 정수가 공백을 두고 입력된다.
// (정수의 범위는 -1000 ~ +1000 이다.)

// 출력
// 두 정수의 합이 출력된다.

#include <stdio.h>

int main(void)
{
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	printf("%d", val1 + val2);
	return 0;
}