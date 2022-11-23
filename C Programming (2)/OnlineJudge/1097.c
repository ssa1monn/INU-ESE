// unsigned int 타입의 변수 data가 있다.
// 이 값을 2진수의 값에 따라 시각적으로 표현하는 함수 makeDot()를 구현하고자 한다.

// 예들 들어,  data의 값에 10진수로 100이라는 숫자가 들어왔다면, 이것에 해당하는 2진수 패턴을 배열에 저장한 후 이것을 문자열로 출력하는 것이다.
// 처리 순서를 생각해 보면, 

// 100을 입력했을 때, 이것의 2진수 표현은 0000 0000 0000 0000 0000 0000 0110 0100 이 된다. 
// (32비트로 표현, 앞부분은 모두 0 이다.)

// 이 32개의 비트 값을 char형태의 binary 배열에 치환하여 저장하면 될 것이다.
// 이 때, 2진수 값 중에서 0은 '-'(하이픈), 1은 '*'(에스터리크)으로 바꾸어, 배열에 순차적으로 저장하도록 한다.

// main함수에서는 저장한 binary 배열 마지막에 NULL을 추가하여 문자열로 출력하는 형태이다.
// 위와 같은 결과를 출력하면 -------------------------**--*-- 가 나오면 된다.

// main함수는 건들 수 없고, 주어진 템플릿을 활용하도록 한다.
// 다른 헤더파일을 이용할 수 없다. (표준 문자열 함수 <string.h> 사용 금지)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeDot(unsigned int data, char* _binary);

int main(void)
{
    unsigned int data;
    char binary[33];
    scanf("%u", &data);

    makeDot(data, binary);
    binary[32] = NULL;

    printf("%s", binary);
    return 0;
}

void makeDot(unsigned int data, char* _binary) {
    for(int i = 31; i >= 0; i--) {
        if(data % 2 == 0) {
            _binary[i] = '-';
        } else {
            _binary[i] = '*';
        }
        data /= 2;
    }
}