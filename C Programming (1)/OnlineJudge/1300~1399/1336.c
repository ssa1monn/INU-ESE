// ���� ����
// �� ���� ���� N, M�� �Է¹޾�, N�� M�� ���밪 ���ؿ��� ū ������ ���� ���� �� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ���� ���ڴ� ���� �ٸ���.

// �Է�
// -5 3 (N, M, -INT_MAX <= N, M <= INT_MAX)

// ���
// 2 ( |5| - |3|)

#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, num2;
	int abs1, abs2;

	scanf("%d %d", &num1, &num2);
	abs1 = abs(num1);
	abs2 = abs(num2);

	if (abs1 > abs2)
		printf("%d", abs1 - abs2);
	else if (abs1 < abs2)
		printf("%d", abs2 - abs1);

	return 0;
}