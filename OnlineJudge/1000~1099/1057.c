// 문제 설명
// 1(true, 참) 또는 0(false, 거짓) 이 입력되었을 때
// 반대로 출력하는 프로그램을 작성해보자.

// 입력
// 정수 1개가 입력된다.
// (단, 0 또는 1 만 입력된다.)

// 출력
// 입력된 값이 0이면 1, 1이면 0을 출력한다.

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", !a);
    return 0;
}