// 문제 설명
// 시간이 어떤 형식에 맞추어 입력될 때,
// 그대로 출력하는 연습을 해보자.

// 입력
// 시(hour)와 분(minute)이 ":"(콜론)로 구분되어 입력된다.

// 출력
// 입력받은 시간을 "시:분"으로 출력한다.

#include <stdio.h>

int main(void)
{
	int h, m;
	scanf("%d:%d", &h, &m);
	printf("%d:%d", h, m);
	return 0;
}