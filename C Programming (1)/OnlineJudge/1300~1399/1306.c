// ���� ����
// 200�� 300���� ũ�ų�, 1000�� 2�� ���� �������� 0������ �Ǵ��Ͽ� ����� ����Ͻÿ�.

// �Է�

// ���
// 1

#include <stdio.h>

int main(void)
{
	int val1 = (200 > 300);
	int val2 = (1000 % 2 == 0);
	int vals = (val1 || val2);
	printf("%d", vals);
	return 0;
}