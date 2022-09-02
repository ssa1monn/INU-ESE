// 문제 설명
// 세 개의 숫자를 입력받아 절대값 기준으로 가장 큰 수와 중간 수 간의 차이, 중간 숫자와 제일 작은 숫자간의 차이를 출력하는 프로그램을 작성하시오. 세 숫자는 모두 같을 수도 있다.

// 입력
// -10 0 10

// 출력
// 0 10

#include <stdio.h>
#include <math.h>

int main(void)
{
	int temp, arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2 - i; j++)
		{
			if (abs(arr[j]) > abs(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	
	printf("%d %d", abs(arr[2]) - abs(arr[1]), abs(arr[1]) - abs(arr[0]));
	return 0;
}