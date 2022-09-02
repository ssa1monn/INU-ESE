// 문제 설명
// 길이가 최소 2, 최대 10인 짝수길이의 문자열 S을 입력받아,
// 그 문자열의 중간지점에 'hello'를 넣은 새로운 문자열을 만들어 출력하시오.
// 예. 입력 문자열: abba
// 출력문자열: abhelloba
// (출력 끝에 줄바꿈 없음)

// 입력
// abcd

// 출력
// abhellocd

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char* h = "hello";

	char S[10];
	scanf("%s", S);
	int n = strlen(S);
		
	char H1[15];
	char H2[15];

	for (int i = 0; i < n / 2; i++)
		H1[i] = S[i];

	H1[n / 2] = '\0';

	for (int m = n/2; m < n; m++)
		H2[m - n/2] = S[m];

	H2[n] = '\0';

	strcat(H1, h);
	strcat(H1, H2);
	H1[n + 5] = '\0';
	printf("%s", H1);

	return 0;
}