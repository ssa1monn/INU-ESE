// 문제 설명
// 세 개의 정수를 입력받아, (단, 서로 같을 수도 있음)
// 가장 작은 수를 출력하되,
// 만약 그 수가 2개 이상일 경우 경우, 끝에 "tie"라고 출력하시오.

// 입력
// a b c
// a와 b, 그리고 c는 공백으로 구분된 정수이고 (서로 같을 수도 있고)
// -20억 <= a, b, c <= 20억

// 출력
// k tie
// k는 a,b,c중 가장 작은 수이고
// tie는 k값이 a, b, c 중에 2개 이상일 경우
// k값이 1개라면, tie는 출력되지 않는다.
// 출력끝에 줄바꿈이나 공백문자 없음

#include <stdio.h>

int main(void)
{
	int array[3];
	int temp;

	scanf("%d %d %d", &array[0], &array[1], &array[2]);

	for (int i = 0; i < 3; i++)
	{
		for(int j=0; j < 2; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	}

	printf("%d ", array[0]);

	if (array[0] == array[1])
		printf("tie");

	return 0;
}