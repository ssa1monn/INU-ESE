// 문제 설명
// 최소길이 1, 최대 길이 30인 알파벳 대소문자로 구성된 문자열 s를 입력받아
// 각 알파벳의 빈도수의 내림차순 (빈도수가 높은 알파벳 먼저)으로 알파벳들을 출력하시오. 
// 빈도수를 계산할 때, 대문자와 소문자는 동일하게 처리하며, 출력은 모두 소문자로 한다. 
// 빈도수가 같은 알파벳의 경우 사전순 (a->b->c...)따라 출력한다. 출력끝에는 줄바꿈 문자를 넣지 않는다.

// 입력
// aAzZbBB 가 입력되면
// a 2회, z 2회, b가 3회 입력되었으므로,

// 출력
// baz (a는 z보다 사전순서에서 빠르다)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[30]; // 처음 입력받을 문자열 s
	char temp; // 알파벳 순서대로 문자열 s 를 정렬하기 위한 임시 변수
	scanf("%s", s);
	int n = strlen(s);

	for (int m = 0; m < n; m++)
		s[m] = tolower(s[m]); // 대소문자 구분을 없애기 위해 모든 알파벳을 소문자로

	for (int i = 0; i < n; i++) //아스키코드 값을 이용하여 문자열 s를 오름차순으로 정렬
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] > s[j])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	int count[26] = { 0 }; // 문자열 s 에서 알파벳 빈도를 순서대로 생성

    // 문자열 s에서 a가 있을 경우 'a' - 'a' = 0; count[0] 은 a의 빈도, 따라서 a 빈도의 증가
	for (int i = 0; i < n; i++) 
		count[s[i] - 'a']++;

	char result[2][26] = { 0 }; // 결과값 출력을 위한 2차원 배열

	for (int i = 0; i < 26; i++) // 0번째 줄은 알파벳의 아스키코드 값, 1번째 줄은 각 알파벳의 빈도
	{
		result[0][i] = 'a' + i;
		result[1][i] = count[i];
	}

    // result 의 1번째 줄 (=count값, 알파벳 빈도) 를 기준으로 result의 0, 1번째 줄을 내림차순 정렬
	for (int i = 0; i < 26; i++)
	{
		for (int j = i + 1; j < 26; j++)
		{
			if (result[1][i] < result[1][j])
			{
				temp = result[0][i];
				result[0][i] = result[0][j];
				result[0][j] = temp;

				temp = result[1][i];
				result[1][i] = result[1][j];
				result[1][j] = temp;
			}
		}
	}

    // 이미 큰 순서대로 정렬했으므로, count가 0인 부분은 필요없음
    // 따라서 출력할 result[0][] 부분의 마지막 부분에 NULL 지정
	for (int i = 0; i < 26; i++)
		if (result[1][i] == 0)
			result[0][i] = '\0';

	printf("%s", result[0] );

	return 0;
}