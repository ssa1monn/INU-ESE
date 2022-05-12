// ���� ����
// 2���� ���� (>0) �� �Է� �޾� ����� �� ¦�� ���� ��� �Ͻÿ�.
// ����, ¦�� ������� ������ -1�� ��� �Ͻÿ�.

// �Է�
// 3 5

// ���
// -1

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int even = 0;

	scanf("%d %d", &num1, &num2);

	for (int i = 2; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0 && i % 2 == 0)
		{
			printf("%d\n", i);
			even++;
		}
	}

	if (even == 0)
		printf("-1");

	return 0;
}