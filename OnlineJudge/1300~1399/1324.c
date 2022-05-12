// 문제 설명
// 입력된 4개의 정수 ( > 0) 에 대해 같은 것이 하나라도 있으면 'ok'를 출력, 아니면 'nok'를 출력

// 입력
// 2 29 3 2

// 출력
// ok

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int arr[4];
	int temp = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	arr[0] = a, arr[1] = b, arr[2] = c, arr[3] = d;

	for (int i = 0; i < 4; i++)
		for (int n = i + 1; n < 4; n++)
			if (arr[i] == arr[n])
				temp++;

	if (temp >= 1)
		printf("ok");
	else
		printf("nok");

	return 0;
}