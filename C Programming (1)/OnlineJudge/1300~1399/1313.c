// 문제 설명
// 입력받은 3개의 정수 ( > 0) 중 같은 숫자가 있으면 그 숫자를 출력하고,
// 없으면  0을 출력하시오.

// 입력
// 3 1 3

// 출력
// 3

#include <stdio.h>
#include <math.h>

int main(void)
{
	int val1, val2, val3;
	scanf("%d %d %d", &val1, &val2, &val3);
	
	if (val1 == val2)
		printf("%d", val1);
	else if (val1 == val3)
		printf("%d", val1);
	else if (val2 == val3)
		printf("%d", val2);
	else
		printf("0");
	
	return 0;
}