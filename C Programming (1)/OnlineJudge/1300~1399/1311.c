// ���� ����
// �Է� ���� 1���� ���ؼ�,
// ����ų� 0�̸� �״�� ����ϰ�,
// ������ ���밪�� ���� ����� ��ȯ�Ͽ� ����Ͻÿ�.

// �Է�
// -10

// ���
// 10

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if (n < 0)
		printf("%d", -n);
	else
		printf("%d", n);

	return 0;
}