// ���� ����
// ���̰� �ּ� 2, �ִ� 10�� ���ڿ��� �Է¹޾�,
// �� ���ڿ��� palindrome�̸� 1, �ƴϸ� 0�� ����Ͻÿ�.
// (��� ���� �ٹٲ� ����)

// �Է�
// aba

// ���
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