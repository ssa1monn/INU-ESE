// ���� ����
// �ñ� 7530���� �ް� �ִµ�,
// 8�ð��� ä�� �� ���� ���ʽ��� 1000���� �� �޴´�.
// ���� �ð� ( > 0)�� �ԷµǸ� �ӱ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// 8

// ���
// 61240

#include <stdio.h>

int main(void)
{
	int MperH = 7530;
	int WorkT;
	int SumM;
	
	scanf("%d", &WorkT);

	SumM = WorkT * MperH;

	if (WorkT >= 8)
		SumM = SumM + (1000 * (WorkT / 8));

	printf("%d", SumM);

	return 0;
}