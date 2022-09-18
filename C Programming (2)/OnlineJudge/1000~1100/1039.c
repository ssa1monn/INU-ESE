// unsigned char 형태의 변수 data가 하나 있다.
// 8bit 중 하위 4bit는 아래와 같은 순서대로 각 알파벳을 의미한다고 가정해보자.

// bit	    0 	1 
// 4번째	E	I
// 3번째	S	N
// 2번째	T 	F
// 1번째	J   P 

// [예시] 십진수로 71이라는 숫자가 들어왔다고 가정했을 때,
// 이를 unsigned char형태로 아래와 같이 표현된다.
// 0	1	0	0	0	1	1	1이때, 상위 4bit는 무시하고 하위 4bit에 대해서만 생각한다.
// 4번째 bit부터 차례로, E N F P를 의미한다.

// 이와 같은 방식으로 숫자가 하나 들어왔을 때,
// 하위 4bit에 대해서만 고려한 이 사람의 MBTI 검사 결과를 알파벳 대문자로 공백 없이 출력하는 함수 printMBTI() 를 형태에 맞게 작성하라.

#include <stdio.h>

void printMBTI(unsigned char _data) {
    if (_data & 8) printf("I");
    else printf("E");
    if (_data & 4) printf("N");
    else printf("S");
    if (_data & 2) printf("F");
    else printf("T");
    if (_data & 1) printf("P");
    else printf("J");
}

int main()
{
    int input;
    unsigned char data;

    scanf("%d", &input);
    data = (unsigned char)input;

    printMBTI(data);

    return 0;
}