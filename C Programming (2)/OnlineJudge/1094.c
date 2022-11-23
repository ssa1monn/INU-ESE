// main 함수 내에 더블 포인터 p가 초기화되어있다.

// 다음 조건에 맞는 함수 ese()를 구현하라.
// - 더블 포인터 p를 인자로 받는다.
// - 이 더블 포인터 매개변수에 [3x50] 사이즈의 2차원 배열을 동적으로 할당받고(malloc)
// - 50미만의 공백이 없는 문자열 3개를 키보드로부터 입력을 받아(scanf)
// - 다시 더블포인터를 리턴한다. 

// main 함수에서는 이 세 문자열을 콘솔에 출력하고,
// 동적 할당을 해제하는 (free) 부분으로 되어있다.

// main 함수는 건들 수 없으며, 주어진 템플릿을 활용하라.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char** ese(char** _p);

int main(void)
{
    char** p = NULL;

    p = ese(p);

    printf("%s\n%s\n%s", *p, *(p + 1), *(p + 2));

    for (int i = 0; i < 3; i++) free(p[i]);
    free(p);

    return 0;
}

char** ese(char** _p) {
    _p = (char**)malloc(sizeof(char*) * 3);
    for (int i = 0; i < 3; i++) {
        _p[i] = (char*)malloc(sizeof(char) * 50);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%s", _p[i]);
    }
    return _p;
}