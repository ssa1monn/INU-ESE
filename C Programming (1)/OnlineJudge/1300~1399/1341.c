// 문제 설명
// 세 개의 서로 다른 정수를 입력받아
// 값이 중간인 수를 출력하는 프로그램을 작성하시오

// 입력
// a b c
// a b c는 서로 다른 정수이고, -20억 <= a, b, c <= 20억
// 입력 a b c 사이는 공백으로 구분

// 출력
// k
// a, b, c 중 값이 중간인 수

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

	printf("%d", array[1]);

	return 0;
}