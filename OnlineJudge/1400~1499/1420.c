// ���� ����
// �Ʒ� ���α׷����� �Լ� func �� �μ��� �������� 1���� �Է¹޾�, 1���� �� ���������� ���� ��ȯ�ؾ� �Ѵ�.
// func�� �ϼ��� ��, �Ʒ� ���α׷��� '����' �Ͽ� �����Ű�ÿ�.
// --------------
// #include <stdio.h>
// int func(int a)
// {
//     �� ���� ä�� �����ÿ�
// }
// void main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d", func(a) * func(a));
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
	int sum = 0;
	for (int i = 1; i <= a; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", func(a) * func(a));
	return 0;
}