// ���� ����
// ���� �Է� 2���� ����
// ù ��° ���ڸ� �� ��° ���ڷ� ����������,
// �������� 0�̸� ok�� ���,
// �ƴϸ� nok�� ���.
// (����!! ����� ��� �ҹ���, ���� �ٹٲ� ǥ������ ������)

// �Է�
// 10 5

// ���
// ok

#include <stdio.h>
#include <math.h>

int main(void)
{
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	if (val1 % val2 == 0)
		printf("ok");
	else
		printf("nok");
	return 0;
}