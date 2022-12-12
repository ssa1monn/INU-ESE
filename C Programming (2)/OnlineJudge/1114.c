// ���ڿ� str�ȿ� ���ڿ� key�� ��� ���ԵǾ������� Ȯ���ϴ� �Լ� countKey()�� �ۼ��ϰ��� �Ѵ�.
// ��, ���� ���ĺ��� ��� ���������� ��ҹ��ڸ� �������� �ʰ� ���Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int toLower(char c);
int countKey(char* str, char* key);

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", countKey(str, key));
}

int toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    else {
        return c;
    }
}

int countKey(char* str, char* key) {
    int i = 0, j = 0, count = 0;

    while (str[i] != '\0') {
        j = 0;
        if (toLower(str[i]) == toLower(key[j])) {
            while (key[j] != '\0') {
                if (toLower(str[i + j]) != toLower(key[j])) {
                    break;
                }
                j++;
            }
            if (key[j] == '\0') {
                count++;
            }
        }
        i++;
    }

    return count;
}