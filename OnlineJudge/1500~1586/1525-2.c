// ���� ����
// ���� ���� (�ִ� ũ�� 10��)���� �Է¹޾�, �� �ڸ��� ��Ÿ���� ���ڵ��� �и��ؼ� �󵵼� ��踦 �ۼ��Ѵ�.
// (���ڵ��� ��Ÿ���� ��ġ�� �߿����� �ʴ�.)
// ��踦 �̿��Ͽ�, �󵵼��� ���� ���� ���ڿ� �� �� ���� ��� (���ڿ� �󵵼� ���̴� �������� �и�)�Ͻÿ�.
// �Է��� -999���� ����ȴ�. (-999�� �� �� ��꿡 �������� �ʴ´�.)
// ���� ��� 92 13 14 95 11 -999�� �ԷµǸ�,
// 1�� 4��,
// 9�� 2��
// 2, 3, 4,5�� ���� 1��.
// ���� 1 4�� ����Ѵ�. (��� ������ �ٹٲ� ǥ�ø� ���� �ʴ´�.)
// ��, ���� ���� �󵵼��� ������ ���ڴ� �� 1�����̴�.

// �Է�
// 92 13 14 95 11 -999

// ���
// 1 4

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    int input_array[10] = { 0, };
    int frequency = 0;
    int frequency_number = 0;

    char input[100] = { 0 };
    char onlyNum[100] = { 0 };
    int index = 0;

    // ������ �����Ͽ� ���ڿ� ���·� ���� �Է¹ޱ�
    scanf("%[^\n]s", input);

    int n = strlen(input);

    for (int i = 0; i < n; i++)
    {
        if (input[i] == '-' && input[i + 1] == '9' && input[i + 2] == '9' && input[i + 3] == '9')
        {
            input[i - 1] = '\0';
            break;
        }
    }

    n = strlen(input);

    // ����� ��Ÿ ���ڸ� ������ ���ο� ���ڿ� onlyNum�� ����.
    for (int i = 0; i < n; i++)
    {
        if (input[i] != ' ' && (input[i] >= '0' && input[i] <= '9'))
        {
            onlyNum[index] = input[i];
            index++;
        }
    }

    n = strlen(onlyNum);

    for (int i = 0; i < n; i++)
    {
        int num = onlyNum[i] - '0';
        input_array[num]++;
    }

    frequency = input_array[0];
    frequency_number = 0;

    // 0��° ���� ���ʴ�� �󵵼��� ���� ū ���� �˻��ϴ� ����
    for (int i = 1; i < 9; i++)
    {
        if (frequency < input_array[i]) // ���� ���� ���� ũ�� ��ü
        {
            frequency = input_array[i];
            frequency_number = i;
        }
    }

    printf("%d %d", frequency_number, frequency);

    return 0;
}
