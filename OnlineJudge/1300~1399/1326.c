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
	int val1, val2, valMul;
	
	scanf("%d %d %d", &val1, &val2, &valMul);

	if ((val1 * val2) % valMul == 0)
		printf("ok");
	else
		printf("nok");

	return 0;
}