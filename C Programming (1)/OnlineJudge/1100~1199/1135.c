// ���� ����
// �Էµ� ���� ���� n (1 <= n <= INT_MAX)�� ���Ͽ�, n�� ����� �߿��� �Ҽ��� �͵鸸 ���� �Ϳ��� ū �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// n�� ���� ����

// ���
// n�� ����μ� �Ҽ��� �͵��� ���� �� ���� �������� �и��� ���鼭 ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int p = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		p = 0;

		for (int d = 2; d < i; d++)
		{
			if (i % d == 0)
				p++;
		}

		if (p != 0)
			continue;
		else if (n % i == 0)
			printf("%d ", i);
	}
	return 0;
}