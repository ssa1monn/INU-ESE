// ���� ����
// �Էµ� 1���� ���� (>0)�� ¦���̸鼭 10���� ũ�� 'ok', �ƴϸ� 'nok'�� ����Ͻÿ�.

// �Է�
// 12

// ���
// ok

#include <stdio.h>

int main(void)
{
	int val;

	scanf("%d", &val);

	if ((val % 2 == 0) && (val > 10))
		printf("ok");
	else
		printf("nok");

	return 0;
}