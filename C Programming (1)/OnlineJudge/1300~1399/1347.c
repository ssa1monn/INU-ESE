// ���� ����
// �Է¹��� 3���� ���� ( > 0) �� ���� ���ڰ� ������ �� ���ڸ� ����ϰ�,
// ������  0�� ����Ͻÿ�.

// �Է�
// 3 1 3

// ���
// 3

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b || a == c || b == c)
	{
		if (a == b || a == c)
			printf("%d", a);
		else
			printf("%d", b);
	}
	else
		printf("0");

	return 0;
}