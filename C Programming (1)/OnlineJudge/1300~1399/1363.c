// ���� ����
// ���̰� �ּ� 2, �ִ� 10�� ¦�������� ���ڿ� S�� �Է¹޾�,
// �� ���ڿ��� �߰������� 'hello'�� ���� ���ο� ���ڿ��� ����� ����Ͻÿ�.
// ��. �Է� ���ڿ�: abba
// ��¹��ڿ�: abhelloba
// (��� ���� �ٹٲ� ����)

// �Է�
// abcd

// ���
// abhellocd

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char* h = "hello";

	char S[10];
	scanf("%s", S);
	int n = strlen(S);
		
	char H1[15];
	char H2[15];

	for (int i = 0; i < n / 2; i++)
		H1[i] = S[i];

	H1[n / 2] = '\0';

	for (int m = n/2; m < n; m++)
		H2[m - n/2] = S[m];

	H2[n] = '\0';

	strcat(H1, h);
	strcat(H1, H2);
	H1[n + 5] = '\0';
	printf("%s", H1);

	return 0;
}