// 문제 설명
// 1개의 정수 ( >= 2) 를 입력받아 소수면 1, 아니면 0을 출력하시오.
// (출력 끝에 줄바꿈 없음)

// 입력
// 3

// 출력
// 1

#include <stdio.h>

int main(void)
{
	int n, m = 0;
	scanf("%d", &n);

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			m++;

	if (m == 0)
		printf("1");
	else
		printf("0");

	return 0;
}