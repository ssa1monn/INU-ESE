// ���� ����
// 1���� ���� ( > 2)�� �Է� �޾� �Ҽ��� ��� 1, �ƴϸ� 0�� ��� �Ͻÿ�.

// �Է�
// 3

// ���
// 1

#include <stdio.h>

int main(void)
{
	int num;
	int div = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			div++;

	if (div <= 2)
		printf("1");
	else
		printf("0");

}