// ���� ����
// ���� ���� n (1 <= n <= 20��)��
// ���� ���� k (1 <= k <= 9)�� �Է¹޾�
// n�� ����ִ� k�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// n k
// n�� k�� �������� ���еȴ�.

// ���
// n�� ����ִ� k�� ����

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, k;
	int sum = 0;
	int num;
	int count = 0;
	int pow = 1;

	scanf("%d %d", &n, &k);

	num = n;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (n/pow - (n/(pow*10)) * 10 == k)
		{
			sum++;
		}
		pow = pow * 10;
	}
		
	printf("%d", sum);

	return 0;
}