// ���� ����
// �Էµ� 1���� ���� ( > 0)�� ¦���� 'even'�� ���, Ȧ���� 'odd'�� ����Ͻÿ�.

// �Է�
// 2

// ���
// even

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if (val % 2 == 0)
		printf("even");
	else
		printf("odd");

	return 0;
}