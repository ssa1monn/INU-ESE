// 패리티 비트(parity bit)는 정보의 전달 과정에서 오류가 생겼는지를 검사하기 위해 추가된 비트이다.
// 우리가 전송하고자 하는 데이터는 unsigned int 형태의 총 32bit 짜리 데이터이고,
// 하위 31bit의 저장하고자 하는 값이고, 짝수(even) 패리티를 적용하여 상위 1bit에 값을 넣어주고자 한다.
// 짝수 패리티는 데이터 비트(31 bit)에서 1의 개수가 짝수가 되도록 패리티 비트(최상위 1bit)를 정하는 것이다.

// 예를들어, 십진수 형태로 73이 들어왔다고 가정해보자.
// 이를 이진수로 표현해보면 0b 0100 1001 이고, 1의 개수가 3개이다. 
// 데이터 비트 전체의 1의 개수가 짝수가 되도록 하기 위해서 패리티 비트를 1로 주어 4개로 만든다.
// 즉, 최상위 비트에 1을 주면 이 데이터는 10진수로 2147483721가 된다.

// 이렇게 양의 정수 하나를 입력 받아 패리티 비트를 적용한 값을 리턴하는 함수 makeParity()를 작성하라.

// 만약, 패리티 bit 자리인 최상위 bit가 0으로 비어있지 않고, 입력 값에서 1이 들어왔다면 
// 그 값은 무시하고 1의 개수를 세어 최상위 bit에 짝수 패리티 규직을 적용해 주면 된다.

// 아래 코드에 선언된 형태에 맞추어 makeParity() 함수를 구현하라.
// 단, main 함수는 건들지 마시오.

#include <stdio.h>

unsigned int makeParity(unsigned int _data);

int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}

unsigned int makeParity(unsigned int _data) {
    int count = 0;
    unsigned int result = _data;
    for(int i = 0; i < 31; i++) {
        if(_data & 1) count++;
        _data >>= 1;
    }
    if(count % 2 == 0) return result & ~(1 << 31);
    else return result | 1 << 31;
}