// ���� ����
// �� ���� ���ڸ� �Է¹޾� ���� ū ���� �߰� ���� ���� ����, �߰� ���ڿ� ���� ���� ���ڰ��� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// -10 10 5 (A B C,  -INT_MAX <= A, B, C <= INT_MAX)

// ���
// 5 15 (���� ū���� �߰����� ����, 5(=10-5), �߰� ���� ���� ���� ���� ���� 15 (= 5 - (-10))

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num2 > num3)
		printf("%d %d", num1 - num2, num2 - num3 );
	else if (num1 > num3 && num3 > num2)
		printf("%d %d", num1 - num3, num3 - num2);
	else if (num2 > num1 && num1 > num3)
		printf("%d %d", num2 - num1, num1 - num3);
	else if (num2 > num3 && num3 > num1)
		printf("%d %d", num2 - num3, num3 - num1);
	else if (num3 > num1 && num1 > num2)
		printf("%d %d", num3 - num1, num1 - num2);
	else if (num3 > num2 && num2 > num1)
		printf("%d %d", num3 - num2, num2 - num1);

	return 0;
}