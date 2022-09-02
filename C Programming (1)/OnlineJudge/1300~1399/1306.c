// 문제 설명
// 200이 300보다 크거나, 1000을 2로 나눈 나머지가 0인지를 판단하여 결과를 출력하시오.

// 입력

// 출력
// 1

#include <stdio.h>

int main(void)
{
	int val1 = (200 > 300);
	int val2 = (1000 % 2 == 0);
	int vals = (val1 || val2);
	printf("%d", vals);
	return 0;
}