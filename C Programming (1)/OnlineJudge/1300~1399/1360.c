// ���� ����
// �� ���� ���� n ( >= 3)�� �Է¹޾�
// 3���� n������ �Ҽ��� ������ ����Ͻÿ�.
// (��� ���� �ٹٲ� ����)

// �Է�
// 3

// ���
// 1

#include <stdio.h>

int main(void)
{
	int n, s = 0, num = 0;
	scanf("%d", &n);
	
	for (int m = 3; m <= n; m++)
	{
		for (int i = 2; i < m; i++)
			if (m % i == 0)
				s++;
		if (s == 0)
			num++;
		s = 0;
	}

	printf("%d", num);
	
	return 0;
}