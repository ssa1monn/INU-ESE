// ���� ����
// �Ʒ� ���α׷����� �Լ� func�� �μ��� ���� ���� 1���� �޾�, 1���� �� �������� ���ڵ� �� 3�� ����� ������
// ��ȯ�ؾ� �Ѵ�.
// func�� �ϼ��� ��, �Ʒ� ���α׷��� '����'�Ͽ� �����Ͻÿ�.
// -------------------
// #include <stdio.h>
// int func(int a)
// {
//     �� ���� ä�� �����ÿ�
// }
// void main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d", func(a) + func(a));
//     return;
// }

// �Է�
// ������ �Է�

// ���
// ������ ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int func(int a)
{
	int count = 0;

	for (int i = 1; i <= a; i++)
		if (i % 3 == 0)
			count++;
	
	return count;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", func(a) + func(a));
	return 0;
}