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
#include <ctype.h>
// #include <conio.h>

int main(void)
{
    char input[100] = { 0 };
    char onlyNum[100] = { 0 };
    int result[2][10] = { 0, };
    int count[10] = { 0, };
    // �� int�� �迭 ���� Visual Studio �󿡼��� { 0 } ���� �ᵵ ��� ����.
    // ������ Online Judge ������ ���� �߻�
    int index = 0;
    // ��� �⺻�� 0 ���� �������༭ ���Ŀ� NULL�� �Ƚᵵ �ɰŶ� ����. Ȯ���� ���غ�

    char temp;

    // ������ �����Ͽ� ���ڿ� ���·� ���� �Է¹ޱ�
    scanf("%[^\n]s", input);
    // fgets(input, 100, stdin);
    // 6��, 23�� ����, Visual Studio �����Ϸ������� <conio.h> ������� ���� fgets �Լ� ��� ����
    // Online Judge ������ ��� �Ұ�. ���� scanf�� ���� �������� �޵��� ����

    int n = strlen(input);
    input[n] = '\0'; // NULL ���ڸ� ���� ���ڿ� ���κ� ���� (��� ���������? 10~13�� ����)

    // -999 �� ������ �տ� ���ڸ� �����ϱ�
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '-' && input[i + 1] == '9' && input[i + 2] == '9' && input[i + 3] == '9')
        {
            input[i - 1] = '\0';
            break;
        }
    }

    n = strlen(input);

    // strlen �� ���� -999 �ձ����� ���ڿ� ���̸� ���� ��, �� �ڴ� ��� NULL ó��
    for (int i = n; i < 100; i++)
    {
        input[i] = '\0';
    }

    // ����� ��Ÿ ���ڸ� ������ ���ο� ���ڿ� onlyNum�� ����. ������ ����� �Է¹ޱ⿡ != ' ' �� ���൵ ��.
    for (int i = 0; i < n; i++)
    {
        if ( input[i] != ' ' && (input[i] >= '0' && input[i] <= '9') )
        {
            onlyNum[index] = input[i];
            index++;
        }
    }
    
    n = strlen(onlyNum);

    // ���ڸ� �ִ� onlyNum �迭�� ������������ ���� ����
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (onlyNum[i] > onlyNum[j])
            {
                temp = onlyNum[i];
                onlyNum[i] = onlyNum[j];
                onlyNum[j] = temp;
            }
        }
    }

    // onlyNum �� char �� ���ڿ��̱� ������ ���ڸ� �ƽ�Ű�ڵ� ������ ����. count �迭�� int ���̹Ƿ� ���������� ��ȯ�ϴ� ����
    // + �� ������ �� ���
    for (int i = 0; i < n; i++)
        count[onlyNum[i] - '0']++;

    // result �� 0��° ���� ��� ���ڿ� ���·� ����Ұ��̹Ƿ� '0' + i �� ���� ���ڸ� �ƽ�Ű�ڵ� ������ ����.
    // 1��° ���� �󵵸� ���������� ����Ұ��̹Ƿ� ������ �迭�� count�� ����.
    for (int i = 0; i < 10; i++)
    {
        result[0][i] = '0' + i;
        result[1][i] = count[i];
    }

    // 1��° �� �󵵰��� �������� �迭 ����
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
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

    // 0��° �� ���ڴ� �ƽ�Ű �ڵ�, �� ���� ���·� ���, 1��° �� ���ڴ� �󵵰�, ���������� ���.
    printf("%c %d", result[0][0], result[1][0]);

    return 0;
}