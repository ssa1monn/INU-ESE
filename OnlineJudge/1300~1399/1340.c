// ���� ����
// ���ڸ� 1�� �Է¹޾�,
// ����̸鼭 ¦���̸� positive even,
// ����̸鼭 Ȧ���̸� positive odd,
// �����̸鼭 ¦���̸� negative even,
// �����̸鼭 Ȧ���̸� negative odd,
// 0�̸� zero��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// m
// �ԷµǴ� ����, -20�� <= m <= 20��

// ���
// string
// string�� positive even, positive odd, negative even, negative odd, zero �� �ϳ�
// string �ڿ� �ٹٲ��̳� ���鹮�ھ���

#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	switch (num > 0)
	{
		case 0:
			if (num == 0)
				printf("zero");
			else if (num % 2 != 0)
				printf("negative odd");
			else
				printf("negative even");
			break;
		case 1:
			if (num % 2 != 0)
				printf("positive odd");
			else
				printf("positive even");
			break;
	}

	return 0;
}