// 문제 설명
// 길이가 최대 30인 문자열을 입력받아,
// 문자열의 길이가 소수면 1, 아니면 0을 출력하시오.
// (출력 끝에 줄바꿈 없음)

// 입력
// hello

// 출력
// 1

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, m = 0;
	char arr[30];
	scanf("%s", arr);
	n = strlen(arr);

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			m++;

	if (m == 0)
		printf("1");
	else
		printf("0");
	
	return 0;
}