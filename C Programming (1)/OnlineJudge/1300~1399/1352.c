// ���� ����
// �Էµ� 3���� ���� ( > 0)�� A, B, C��� �� ��, 
// C�� A�� B�� ������̸� 'ok'�� ����ϰ�,
// �ƴϸ� 'nok'�� ����Ͻÿ�.

// �Է�
// 4 6 24

// ���
// ok

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c % a == 0 && c % b == 0)
		printf("ok");
	else
		printf("nok");
	return 0;
}