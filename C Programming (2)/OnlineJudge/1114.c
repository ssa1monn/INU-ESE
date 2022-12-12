// 문자열 str안에 문자열 key가 몇번 포함되었는지를 확인하는 함수 countKey()를 작성하고자 한다.
// 단, 영문 알파벳의 경우 예외적으로 대소문자를 구분하지 않고 비교한다.

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