// ���� ����
// �Էµ� 3���� ���� ( > 0)�� A, B, C��� �� ��,
// C�� A�� B�� ������̸� 'ok'�� ����ϰ�, �ƴϸ� 'nok'�� ����Ͻÿ�.

// �Է�
// 12 48 4

// ���
// ok

#include <stdio.h>

int main(void)
{
	int val1, val2, valDiv;
	
	scanf("%d %d %d", &val1, &val2, &valDiv);

	if ((val1 % valDiv == 0) && (val2 % valDiv == 0))
		printf("ok");
	else
		printf("nok");

	return 0;
}