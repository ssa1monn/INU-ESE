// ���� ����
// �� ���� ���ڸ� �Է¹޾� ���밪 �������� ���� ū ���� �߰� �� ���� ����, �߰� ���ڿ� ���� ���� ���ڰ��� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ���ڴ� ��� ���� ���� �ִ�.

// �Է�
// -10 0 10

// ���
// 0 10

#include <stdio.h>
#include <math.h>

int main(void)
{
	int temp, arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2 - i; j++)
		{
			if (abs(arr[j]) > abs(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	
	printf("%d %d", abs(arr[2]) - abs(arr[1]), abs(arr[1]) - abs(arr[0]));
	return 0;
}