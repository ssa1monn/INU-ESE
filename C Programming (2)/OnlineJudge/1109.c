// 2차원 포인터 배열에 동적할당으로 문자열을 입력받고, 출력하는 프로그램이다.
// 포인터배열 char* str[6] 이 있다. 

// 포인터 배열 str 의 각 요소(총 6개)에 동적할당(malloc)으로 최대 99자를 저장할 수 있는 문자열 공간을 할당 받고
// scanf로 6개의 문자열을 입력을 받는 함수 makeArrayandInput() 를 구현하라. (코드 짜야함)

// 이후, main에서는 입력된 문자열을 하나 씩 출력하고, 동적할당을 해제하게 된다. (코드 주어짐)

// <코드 템플릿은 아래 Hint 참고>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void makeArrayandInput(char **str);

int main() {

    char* str[6];

    makeArrayandInput(str);

    // 출력
    for (int j = 0; j < 6; j++)
    {
        printf("%s\n", str[j]);
    }

    // 동적할당 free
    for (int i = 0; i < 6; i++) free(str[i]);

    return 0;
}


void makeArrayandInput(char **str) {
    for(int i = 0; i < 6; i++) {
        
    }
}