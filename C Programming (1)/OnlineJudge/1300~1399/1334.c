// ���� ����
// 1���� ���� (>=0) n�� �Է� �޾� n��° �Ǻ����� ��������
// ���ʷ� ��� �Ͻÿ�.
// 0��° ����: 1,
// 1��° ����: 1,
// 2��° ����: 2,
// ��

// �Է�
// 2

// ���
// 1
// 1
// 2

#include <stdio.h>

int main(void)
{
	int repeat;
	int temp = 0;
	int fib = 1;

	scanf("%d", &repeat);

	for (int i = 0; i <= repeat; i++)
	{
		printf("%d\n", fib);
		fib = fib + temp;
		temp = fib - temp;
	}

	return 0;
}