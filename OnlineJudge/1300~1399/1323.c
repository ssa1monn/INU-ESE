// ���� ����
// �Էµ� 3���� ���� �ٸ� ���� ( > 0)�� ���� ���� ū ������ ���� ���� ���� �� ���� ����Ͻÿ�.

// �Է�
// 1 2 3

// ���
// 2

#include <stdio.h>

int main(void)
{
	int val1, val2, val3;
	int val[3];
	int min, max;

	scanf("%d %d %d", &val1, &val2, &val3);
	
	val[0] = val1, val[1] = val2, val[2] = val3;

	min = val[0];
		for (int i = 1; i < 3; i++)
			if (val[i] < min)
				min = val[i];

	max = val[0];
		for (int i = 1; i < 3; i++)
			if (val[i] > max)
				max = val[i];

	printf("%d", max - min);

	return 0;
}