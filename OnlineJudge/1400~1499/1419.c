// 문제 설명
// 아래 프로그램에서 함수 func 는 "2개의 정수를 인수로 받아서 두 수의 합을 반환해야 한다."
// 아래에서 함수 func 를 완성한 후, 전체를 복사후 붙여넣기 해서 수행하시오.
// ------------------------------------------------------------------------
// #include <stdio.h>
// int func(int a, int b)
// {
//      이 안을 채워 넣으시오
// }
// void main()
// {
//      int a, b;
//      scanf("%d", &a);
//      scanf("%d", &b);
//      printf("%d", func(a, b) + func(a, b));
//      return;
// }

// 입력
// 임의의 입력

// 출력
// 적당한 출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int func(int a, int b)
{
	return a + b;
}
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d", func(a, b) + func(a, b));
	return 0;
}