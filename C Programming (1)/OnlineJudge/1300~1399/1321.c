// ���� ����
// �Էµ� 1���� ���� ( > 0)�� 10�� �ڸ����ڰ� 3�̸� 'ok'�� ���, �ƴϸ� 'nok'�� ����Ͻÿ�.

// �Է�
// 131

// ���
// ok

#include <stdio.h>

int main(void)
{
	int val;
	int val10;

	scanf("%d", &val);

	val10 = (val / 10) % 10;

	if (val10 == 3)
		printf("ok");
	else
		printf("nok");

	return 0;
}