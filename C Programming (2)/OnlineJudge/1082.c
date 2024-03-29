// 첫째 줄에 unsigned int (4byte) 형태의 입력을 16진수로하나 들어온다. (data) -- 원본 데이터
// int 10 진수의 형태로 0으로 만들 bit 의 개수가 입력된다.(0~32 사이의 수) -- 바꿀 bit의 개수(n이라고 하자.)
// int 10진수의 형태로 0으로 만들 bit의 index가 차례대로 입력됨. (1~32 사이의 수) -- 바꿀 bit의 index (arr이라고 하자)

// data의 값 중 n개의 bit를 조작할 것이다.
// 하위비트 부터 시작해서 해당 번째 모든 bit의 값을 0으로 만들어 리턴하는 코드를 작성하라.
// 다른 bit에는 손상이 있어서는 안되며, 해당 번째 값이 원래 0이든 1이든 무조건 0으로 만들어 16진수로 출력하라.
// ( 1번째 bit 가 가장 하위 비트로 한다.)
// 단, 16진수 중 알파벳은 항상 대문자로 출력하라.

// 바꿀 bit 의 index (여기서는 arr의 값)이 서로 겹친다면 1회만 바꾸면 된다.

// (예시)
// 0X11111111 = 0b 00010001 00010001 00010001 00010001 이고,
// n = 4 이고,
// arr = { 1, 2, 5 , 5 } 일 때,
// 0b 00010001 00010001 00010001 0000 0000 = 0X11111100 를 리턴

// 코드 작성 조건 : 헤더파일은 <stdio.h>만 사용하고, 그 외의 함수는 직접 정의하여 작성한다. , 
// 템플릿 없이 알아서 작성하고 입력에 대한 출력결과만 맞으면 된다.

#include <stdio.h>

int main(void) {
    unsigned int data;
    int n, temp;
    scanf("%x", &data); 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        data &= ~(1 << temp - 1);
    }
    printf("%X", data);
    return 0;
}