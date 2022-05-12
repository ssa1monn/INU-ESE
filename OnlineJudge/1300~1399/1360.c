// 문제 설명
// 한 개의 정수 n ( >= 3)을 입력받아
// 3부터 n까지의 소수의 개수를 출력하시오.
// (출력 끝에 줄바꿈 없음)

// 입력
// 3

// 출력
// 1

#include <stdio.h>

int main(void)
{
	int n, s = 0, num = 0;
	scanf("%d", &n);
	
	for (int m = 3; m <= n; m++)
	{
		for (int i = 2; i < m; i++)
			if (m % i == 0)
				s++;
		if (s == 0)
			num++;
		s = 0;
	}

	printf("%d", num);
	
	return 0;
}