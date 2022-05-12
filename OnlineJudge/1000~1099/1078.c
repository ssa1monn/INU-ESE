// 문제 설명
// 이 입력될 때 계절이 출력되도록 해보자.
// 예
// 월 : 계절
// 12, 1, 2 : winter
// 3, 4, 5 : spring
// 6, 7, 8 : summer
// 9, 10, 11 : fall

// 입력
// 월을 의미하는 한 개의 정수가 입력된다.
// (1 ~ 12)

// 출력
// 계절을 출력한다.

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	}

	return 0;
}