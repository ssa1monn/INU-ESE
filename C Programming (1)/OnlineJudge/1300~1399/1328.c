// ���� ����
// 2���� ���� (>0) �� �Է� �޾� ����� �� Ȧ�� ���� ��� �Ͻÿ�.
// Ȧ�� ������� ������ ��� ����.

// �Է�
// 3 15

// ���
// 1
// 3

#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0 && i % 2 != 0)
			printf("%d\n", i);

	return 0;
}