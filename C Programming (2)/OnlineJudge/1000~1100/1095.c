// 문자열에 들어있는 특정 문자의 개수를 세고자 한다.

// main 함수에서, key 문자와  100자 미만의 문자열 str이 차례로 입력된다.
// 문자열 str안에 key값의 포함 횟수를 리턴하는 함수 countKey()를 작성하라. 

// main함수는 건들 수 없고, 주어진 템플릿을 활용하도록 한다.
// 다른 헤더파일을 이용할 수 없다. (표준 문자열 함수 <string.h> 사용 금지)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countKey(char *str, char key);

int main(void)
{
    char str[100];
    char key;

    scanf("%c", &key);
    scanf("%s", str);

    printf("%d", countKey(str, key));

    return 0;
}

int countKey(char* str, char key) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == key) count++;
    }
    return count;
}