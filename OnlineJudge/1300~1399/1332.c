// ���� ����
// 2���� ���� (>0) �� �Է� �޾� ��������� ���� ��� �Ͻÿ�.

// �Է�
// 2 4

// ���
// 3

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int SUMcd = 0;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			SUMcd = SUMcd + i;

	printf("%d", SUMcd);

	return 0;
}