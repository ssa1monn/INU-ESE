// ���� ����
// ���̰� �ִ� 30�� ���ڿ��� �Է¹޾�,
// ���ڿ��� ���̰� �Ҽ��� 1, �ƴϸ� 0�� ����Ͻÿ�.
// (��� ���� �ٹٲ� ����)

// �Է�
// hello

// ���
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