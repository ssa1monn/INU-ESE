// ���� ����
// 2���� ���� (>0)�� �Է� �޾� �ִ� ������� ��� �Ͻÿ�.

// �Է�
// 12 24

// ���
// 12

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int MAXcd = 0;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			MAXcd = i;

	printf("%d", MAXcd);

	return 0;
}