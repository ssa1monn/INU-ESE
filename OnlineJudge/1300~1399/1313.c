// ���� ����
// �Է¹��� 3���� ���� ( > 0) �� ���� ���ڰ� ������ �� ���ڸ� ����ϰ�,
// ������  0�� ����Ͻÿ�.

// �Է�
// 3 1 3

// ���
// 3

#include <stdio.h>
#include <math.h>

int main(void)
{
	int val1, val2, val3;
	scanf("%d %d %d", &val1, &val2, &val3);
	
	if (val1 == val2)
		printf("%d", val1);
	else if (val1 == val3)
		printf("%d", val1);
	else if (val2 == val3)
		printf("%d", val2);
	else
		printf("0");
	
	return 0;
}