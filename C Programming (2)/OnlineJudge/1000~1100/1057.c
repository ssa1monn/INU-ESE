// 99자 이하의 공백 없는 문자열이 하나 입력된다.
// 이 문자열을 역순으로 출력하는 프로그램을 만들어라.

// 단, 역순으로 변형된 결과 중 가장 첫번 째 문자가 영문 소문자라면 그 문자만 대문자로 바꾸어 출력하라.

// 코드는 제약 없이 자유롭게 작성하면 된다.

#include <stdio.h>

int main(void) {
    char str[100];
    scanf("%s", str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        if (i == length - 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        printf("%c", str[i]);
    }

    return 0;
}