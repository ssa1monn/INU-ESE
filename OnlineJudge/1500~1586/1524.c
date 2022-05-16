#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[30]; // ó�� �Է¹��� ���ڿ� s
	char temp; // ���ĺ� ������� ���ڿ� s �� �����ϱ� ���� �ӽ� ����
	scanf("%s", s);
	int n = strlen(s);

	for (int m = 0; m < n; m++)
		s[m] = tolower(s[m]); // ��ҹ��� ������ ���ֱ� ���� ��� ���ĺ��� �ҹ��ڷ�

	for (int i = 0; i < n; i++) //�ƽ�Ű�ڵ� ���� �̿��Ͽ� ���ڿ� s�� ������������ ����
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] > s[j])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	int count[26] = { 0 }; // ���ڿ� s ���� ���ĺ� �󵵸� ������� ����

    // ���ڿ� s���� a�� ���� ��� 'a' - 'a' = 0; count[0] �� a�� ��, ���� a ���� ����
	for (int i = 0; i < n; i++) 
		count[s[i] - 'a']++;

	char result[2][26] = { 0 }; // ����� ����� ���� 2���� �迭

	for (int i = 0; i < 26; i++) // 0��° ���� ���ĺ��� �ƽ�Ű�ڵ� ��, 1��° ���� �� ���ĺ��� ��
	{
		result[0][i] = 'a' + i;
		result[1][i] = count[i];
	}

    // result �� 1��° �� (=count��, ���ĺ� ��) �� �������� result�� 0, 1��° ���� �������� ����
	for (int i = 0; i < 26; i++)
	{
		for (int j = i + 1; j < 26; j++)
		{
			if (result[1][i] < result[1][j])
			{
				temp = result[0][i];
				result[0][i] = result[0][j];
				result[0][j] = temp;

				temp = result[1][i];
				result[1][i] = result[1][j];
				result[1][j] = temp;
			}
		}
	}

    // �̹� ū ������� ���������Ƿ�, count�� 0�� �κ��� �ʿ����
    // ���� ����� result[0][] �κ��� ������ �κп� NULL ����
	for (int i = 0; i < 26; i++)
		if (result[1][i] == 0)
			result[0][i] = '\0';

	printf("%s", result[0] );

	return 0;
}