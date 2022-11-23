// unsigned int 형태의 10진수 형태의 입력이 주어진다.
// 예를 들어 1234567이라는 숫자를 2진수로 나타낸 값은 아래와 같다.
// 0001 0010 1101 0110 1000 0111
// 2진수로 나타낸 표현에서 1의 개수를 리턴하는 함수 countBinaryOne() 를 작성하라.

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 단, main 함수는 절대 건들지 않는다.

#include <stdio.h>

int countBinaryOne(unsigned int _data) {
// 이 부분을 작성하라 ==========================

    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((_data >> i) & 1) {
            count++;
        }
    }
    return count;

// =============================================
}

int main() {

    unsigned int data;
    scanf("%d", &data);

    printf("%d", countBinaryOne(data));

    return 0;
}