// ���� ����
// �Էµ� 4���� ���� ( > 0) �� ���� ���� ���� �ϳ��� ������ 'ok'�� ���, �ƴϸ� 'nok'�� ���

// �Է�
// 2 29 3 2

// ���
// ok

#include <stdio.h>

int main(void)
{
	int arr[4], s = 0;
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

	for (int i = 0; i < 4; i++)
		for (int n = i + 1; n < 5; n++)
			if (arr[i] == arr[n])
				s++;

	if (s > 0)
		printf("ok");
	else
		printf("nok");

	return 0;
}