// ���� ����
// �Էµ� 1���� ���� ( > 0)�� Ȧ���̸鼭 10���� ũ�ų� ����, 100���� �۰ų� ������ 'ok',
// �ƴϸ� 'nok'�� ����Ͻÿ�.

// �Է�
// 13

// ���
// ok

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if ((val % 2 != 0) && (val >= 10) && (val <= 100))
		printf("ok");
	else
		printf("nok");

	return 0;
}