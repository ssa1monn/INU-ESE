// ���� ����
// 1���� ���� ( >= 2) �� �Է¹޾� �Ҽ��� 1, �ƴϸ� 0�� ����Ͻÿ�.
// (��� ���� �ٹٲ� ����)

// �Է�
// 3

// ���
// 1

#include <stdio.h>

int main(void)
{
	int n, m = 0;
	scanf("%d", &n);

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			m++;

	if (m == 0)
		printf("1");
	else
		printf("0");

	return 0;
}