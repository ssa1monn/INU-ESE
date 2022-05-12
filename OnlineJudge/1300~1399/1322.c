// 문제 설명
// 입력된 월 (1 ~ 12)에 대해서 포함된 날수를 출력하시오.
// 1월 - 31일
// 2월 - 28일
// 3월 - 31일
// 4월 - 30일
// 5월 - 31일
// 6월 - 30일
// 7월 - 31일
// 8월 - 31일
// 9월 - 30일
// 10월 -31일
// 11월 - 30일
// 12월 - 31일

// 입력
// 3

// 출력
// 31

#include <stdio.h>

int main(void)
{
	int month;

	scanf("%d", &month);

	switch (month)
	{
		case 1: printf("31"); break;
		case 2: printf("28"); break;
		case 3: printf("31"); break;
		case 4: printf("30"); break;
		case 5: printf("31"); break;
		case 6: printf("30"); break;
		case 7: printf("31"); break;
		case 8: printf("31"); break;
		case 9: printf("30"); break;
		case 10: printf("31"); break;
		case 11: printf("30"); break;
		case 12: printf("31"); break;
	}

	return 0;
}