// ���� ����
// �� ���� ���� N, M�� �Է¹޾� ū ������ ���� ���� �� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

// �Է�
// 2 5 (N, M -INT_MAX <= N, M <= INT_MAX)

// ���
// 3

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int max, min;

	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		max = num2, min = num1;
	else
		max = num1, min = num2;

	printf("%d", max - min);

	return 0;
}