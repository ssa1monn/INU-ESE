// 255 이하의 숫자가 하나 입력된다.
// 10진수를 2진수로 출력하는 함수 printBinary()를 형태에 맞게 만들어라.
// 단, 2진수로 출력 시 8자리(8bit)로 출력하라. (즉, 8자리에 맞춰 앞에 0을 붙이란 말)

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 단, main 함수는 절대 건들지 않는다.

#include <stdio.h>

void printBinary(unsigned int _x) {
// 이 부분을 구현하라 ==============================

    for (int i = 7; i >= 0; i--) {
        printf("%d", (_x >> i) & 1);
    }

// =================================================
}

int main() {

    unsigned int x;
    scanf("%d", &x);

    printBinary(x);

    return 0;
}