// 문제 설명
// 길이가 최소 2, 최대 10인 문자열을 입력받아,
// 이 문자열이 palindrome이면 1, 아니면 0을 출력하시오.
// (출력 끝에 줄바꿈 없음)

// 입력
// aba

// 출력
// 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	bool isPalindrome = true;
	char arr[10];
	int n;
	scanf("%s", arr);
	n = strlen(arr);

	for (int i = 0; i < n / 2; i++)
		if (arr[i] != arr[n - 1 - i]) {
			isPalindrome = false;
			break;
		}

	printf("%d", isPalindrome);

	return 0;
}