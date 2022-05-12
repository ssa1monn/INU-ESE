// 문제 설명
// 5와 6이 모두 짝수인지를 판단하여 결과를 출력하시오.

// 입력

// 출력
// 0

#include <stdio.h>

int main(void)
{
	printf("%d", (5 % 2 == 0) && (6 % 2 == 0));
    return 0;
}