// ���� ����
// �Ʒ� ���α׷����� �Լ� func �� "2���� ������ �μ��� �޾Ƽ� �� ���� ���� ��ȯ�ؾ� �Ѵ�."
// �Ʒ����� �Լ� func �� �ϼ��� ��, ��ü�� ������ �ٿ��ֱ� �ؼ� �����Ͻÿ�.
// ------------------------------------------------------------------------
// #include <stdio.h>
// int func(int a, int b)
// {
//      �� ���� ä�� �����ÿ�
// }
// void main()
// {
//      int a, b;
//      scanf("%d", &a);
//      scanf("%d", &b);
//      printf("%d", func(a, b) + func(a, b));
//      return;
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

int func(int a, int b)
{
	return a + b;
}
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d", func(a, b) + func(a, b));
	return 0;
}