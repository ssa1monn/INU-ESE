// 문제 설명
// 시급 7530원을 받고 있는데,
// 8시간을 채울 때 마다 보너스로 1000원씩 더 받는다.
// 일한 시간 ( > 0)이 입력되면 임금을 출력하는 프로그램을 작성하시오.

// 입력
// 8

// 출력
// 61240

#include <stdio.h>

int main(void)
{
	int MperH = 7530;
	int WorkT;
	int SumM;
	
	scanf("%d", &WorkT);

	SumM = WorkT * MperH;

	if (WorkT >= 8)
		SumM = SumM + (1000 * (WorkT / 8));

	printf("%d", SumM);

	return 0;
}