// unsigned char 형태의 4개짜리 배열이 있다.
// 이 배열에 16진수 형태로 값을 입력받는다.
// 16진수 형태의 숫자를 char 변수에 저장하기 위해 casting을 적용한다. 

// 이 배열의 2진수로 바꾼 형태를 기준으로
// 1일때는 *을 출력하고, 0일때는 공백을 출력하는 함수 drawBox()를 만들어라.
// (마지막 줄바꿈 여부는 채점에 영향을 미치지 않음)

// 배열을 인자로 하는 함수에 대해서는 아직 생각하지 않아도 된다.
// (main에서 배열을 다루듯이 함수 안에서도 똑같이 다루면 된다.)

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 단, main 함수는 절대 건들지 않는다.


#include <stdio.h>

void drawBox(unsigned char _data[]) {
// 이 부분을 작성하라 ================================

    for (int i = 0; i < 4; i++) {
        for (int j = 7; j >= 0; j--) {
            if ((_data[i] >> j) & 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

// ==================================================
}

int main() {

    unsigned char data[4] = { 0XFF, 0X12, 0X34, 0X01 }; // 예시
    int input = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%X", &input);
        data[i] = (char)input;
    }

    drawBox(data);

    return 0;
}