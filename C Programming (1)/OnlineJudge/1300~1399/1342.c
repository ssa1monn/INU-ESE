// ���� ����
// �� ���� ������ �Է¹޾�, (��, ���� ���� ���� ����)
// ���� ���� ���� ����ϵ�,
// ���� �� ���� 2�� �̻��� ��� ���, ���� "tie"��� ����Ͻÿ�.

// �Է�
// a b c
// a�� b, �׸��� c�� �������� ���е� �����̰� (���� ���� ���� �ְ�)
// -20�� <= a, b, c <= 20��

// ���
// k tie
// k�� a,b,c�� ���� ���� ���̰�
// tie�� k���� a, b, c �߿� 2�� �̻��� ���
// k���� 1�����, tie�� ��µ��� �ʴ´�.
// ��³��� �ٹٲ��̳� ���鹮�� ����

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

	printf("%d ", array[0]);

	if (array[0] == array[1])
		printf("tie");

	return 0;
}