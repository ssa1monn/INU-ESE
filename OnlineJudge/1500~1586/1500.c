// ���� ����
// ���� ���� 2��, a�� b�� (a <= b) �Է� �޾� a�� b ���̿� �ִ� Ȧ������ ���� c (a�� b�� ����)�� ���ϰ�, �� Ȧ������ �� s�� ����� ��, c + s�� ����Ѵ�.

// �Է�
// 1 6

// ���
// c = 2. Ȧ���� 3, 5�̴�.
// s = 8. 
// ����� 10 (= c + s)�̴�. 
// 10 �ڿ� �ٹٲ� ǥ�ô� ����.

#include <stdio.h>

int main(void)
{
	int a, b;
	int c = 0, s = 0;
	scanf("%d %d", &a, &b);
	for (int i = a + 1; i < b; i++)
	{
		if (i % 2 == 0)
			continue;
		c++;
		s += i;
	}
	printf("%d", c + s);
	return 0;
}