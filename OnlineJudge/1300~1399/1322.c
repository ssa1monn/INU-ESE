// ���� ����
// �Էµ� �� (1 ~ 12)�� ���ؼ� ���Ե� ������ ����Ͻÿ�.
// 1�� - 31��
// 2�� - 28��
// 3�� - 31��
// 4�� - 30��
// 5�� - 31��
// 6�� - 30��
// 7�� - 31��
// 8�� - 31��
// 9�� - 30��
// 10�� -31��
// 11�� - 30��
// 12�� - 31��

// �Է�
// 3

// ���
// 31

#include <stdio.h>

int main(void)
{
	int month;

	scanf("%d", &month);

	switch (month)
	{
		case 1: printf("31"); break;
		case 2: printf("28"); break;
		case 3: printf("31"); break;
		case 4: printf("30"); break;
		case 5: printf("31"); break;
		case 6: printf("30"); break;
		case 7: printf("31"); break;
		case 8: printf("31"); break;
		case 9: printf("30"); break;
		case 10: printf("31"); break;
		case 11: printf("30"); break;
		case 12: printf("31"); break;
	}

	return 0;
}