// ���� ����
// �Էµ� 4���� ���� ( > 0) �� ���� ���� ���� �ϳ��� ������ 'ok'�� ���, �ƴϸ� 'nok'�� ���

// �Է�
// 2 29 3 2

// ���
// ok

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int arr[4];
	int temp = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	arr[0] = a, arr[1] = b, arr[2] = c, arr[3] = d;

	for (int i = 0; i < 4; i++)
		for (int n = i + 1; n < 4; n++)
			if (arr[i] == arr[n])
				temp++;

	if (temp >= 1)
		printf("ok");
	else
		printf("nok");

	return 0;
}