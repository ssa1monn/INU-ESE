// ���� ����
// �Էµ� 1���� ���� ( > 9) n�� ���ؼ�, n�� ���� �ڸ� ���ڸ� ���
// �Ͻÿ�.

// �Է�
// 99

// ���
// 9

#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int num10 = ((num / 10) % 10);

	printf("%d", num10);

	return 0;
}