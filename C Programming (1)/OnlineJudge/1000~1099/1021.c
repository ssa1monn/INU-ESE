// 문제 설명
// int형 정수 하나를 입력받아 3번 출력해보자.

// 입력
// 정수 하나가 입력된다.

// 출력
// 입력받은 정수를 공백으로 구분해 세 번 출력한다.

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d %d %d", n, n, n);
	return 0;
}