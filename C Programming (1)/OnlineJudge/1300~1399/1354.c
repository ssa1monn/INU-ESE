// ���� ����
// ���� ���� ( > 0) 2���� �Է¹޾� �ּҰ������ ����Ͻÿ�. 
// ����. ����� ���� �ٹٲ�ǥ�� ����.

// �Է�
// 6 8

// ���
// 24

#include <stdio.h>

int main(void)
{
	int a, b, gcd;
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a && i <= b; i++)
		if (a % i == 0 && b % i == 0)
			gcd = i;

	printf("%d", a * b / gcd);

	return 0;
}