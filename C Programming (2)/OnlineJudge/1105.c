// 두 문자열의 같은 자리에 같은 문자의 횟수를 구하는 프로그램이다. (2차원 배열 각 행 문자열)
// 아래 내용을 만족시키는 함수 cmp()를 정의하고, main안의 주어진 부분에서 적당한 인자를 넘겨 호출하라.

// 2차원 문자열 str의 첫번째행과 두번째 행에 각각 문자열을 입력받고,
// 이 두 문자열의 각 자리를 비교하여 같은 문자인 횟수를 리턴하는 함수 cmp()를 구현하라.
// <코드 템플릿은 아래 Hint 참고>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cmp(char _str[2][100], int* cnt) {
    for (int i = 0; _str[0][i] != '\0' && _str[1][i] != '\0'; i++) {
        if (_str[0][i] == _str[1][i]) (*cnt)++;
    }
}

int main() {

    char str[2][100];
    int cnt = 0; // 같은자리 같은문자 개수

    // 입력
    scanf("%s", str[0]);
    scanf("%s", str[1]);

    // cmp 함수 호출 ====================
    cmp(str, &cnt);
    // =============================

    //출력
    printf("%d", cnt);

    return 0;
}