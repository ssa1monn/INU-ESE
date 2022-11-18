// 문자열 str안에 문자열 key가 포함되었는지 확인하는 함수 isKeyIncluded()를 작성하고자 한다.

// main 함수에서,100자 미만의 문자열 str과  10자 미만의 문자열 key 가 차례로 입력된다.
// 문자열 str안에 key 값이 한번이라도 들어있으면 1을 리턴하고, 없으면 0을 리턴하는 함수 isKeyIncluded()를 작성하라. 

// main함수는 건들 수 없고, 주어진 템플릿을 활용하도록 한다.
// 다른 헤더파일을 이용할 수 없다. (표준 문자열 함수 <string.h> 사용 금지)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isKeyIncluded(char* str, char* key);

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));

    return 0;
}

int isKeyIncluded(char* str, char* key) {
    int i, j;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == key[0]) {
            for(j = 1; key[j] != '\0'; j++) {
                if(str[i + j] != key[j]) break;
            }
            if(key[j] == '\0') return 1;
        }
    }
    return 0;
}