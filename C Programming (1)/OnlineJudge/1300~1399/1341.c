// ���� ����
// �� ���� ���� �ٸ� ������ �Է¹޾�
// ���� �߰��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

// �Է�
// a b c
// a b c�� ���� �ٸ� �����̰�, -20�� <= a, b, c <= 20��
// �Է� a b c ���̴� �������� ����

// ���
// k
// a, b, c �� ���� �߰��� ��

#include <stdio.h>

int main(void)
{
	int array[3];
	int temp;

	scanf("%d %d %d", &array[0], &array[1], &array[2]);

	for (int i = 0; i < 3; i++)
	{
		for(int j=0; j < 2; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	}

	printf("%d", array[1]);

	return 0;
}