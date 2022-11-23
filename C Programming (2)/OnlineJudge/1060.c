// 첫째 줄에 unsigned int (4byte) 형태의 입력을 16진수로 하나 들어온다. (data)
// 두번째 줄에 32이하의 int 10 진수의 형태로 정수가 하나 들어온다. (n)

// data의 값 중 하위비트 부터 시작해서 n번째 bit의 값을 0으로 만들어 리턴하는 함수 makeDataZero()을 작성하라.
// 다른 bit에는 손상이 있어서는 안되며, n번째 값이 원래 0이든 1이든 무조건 0으로 만들어 리턴하라.
// (n = 1일 때,즉 1번째 bit 가 가장 하위 비트이다.)

// (예시)
// 0X11111111 = 0b 00010001 00010001 00010001 00010001 이고,
// n = 1 일 때,
// 0b 00010001 00010001 00010001 0001000"0" = 0X11111110 를 리턴

// 아래 코드에 선언된 형태에 맞추어 makeDataZero() 함수를 구현하라.
// 단, main 함수는 건들지 마시오.

#include <stdio.h>

int makeDataZero(int _data, int _n);

int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataZero(data, n));

    return 0;
}

int makeDataZero(int _data, int _n) {
    return _data & ~(1 << (_n - 1));
}