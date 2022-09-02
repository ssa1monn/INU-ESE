// 문제 설명
// 세 개의 숫자를 입력받아 각각을 2로 나눈 나머지를 순서대로 출력

// 입력
// 3 4 5 (숫자 사이는 1개의 공백으로 구분)

// 출력
// 1 0 1   (숫자 사이는 1개의 공백으로 구분)

#include <stdio.h>

int main(void)
{
	int val1, val2, val3;
	scanf("%d %d %d", &val1, &val2, &val3);
	printf("%d %d %d", val1%2, val2%2, val3%2);
	return 0;
}