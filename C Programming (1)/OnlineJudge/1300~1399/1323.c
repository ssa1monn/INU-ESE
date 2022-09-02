// 문제 설명
// 입력된 3개의 서로 다른 정수 ( > 0)에 대해 가장 큰 수에서 가장 작은 수를 뺀 값을 출력하시오.

// 입력
// 1 2 3

// 출력
// 2

#include <stdio.h>

int main(void)
{
	int val1, val2, val3;
	int val[3];
	int min, max;

	scanf("%d %d %d", &val1, &val2, &val3);
	
	val[0] = val1, val[1] = val2, val[2] = val3;

	min = val[0];
		for (int i = 1; i < 3; i++)
			if (val[i] < min)
				min = val[i];

	max = val[0];
		for (int i = 1; i < 3; i++)
			if (val[i] > max)
				max = val[i];

	printf("%d", max - min);

	return 0;
}