// (두자리수) X (두자리수) 의 연산은 아래와 같은 과정을 통해 이루어진다.
// 이때 두자리수 입력 2개에 의한 3가지의 출력을 한줄에 하나 씩 출력하는 함수 printCalc()를 만들어라.

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 단, main 함수는 절대 건들지 않는다.

//          24     ---- 입력 1
//     x    37     ---- 입력 2
//   ------------------------
//         168     ---- 출력 1
//    (+)  72      ---- 출력 2
//   ----------
//         888     ---- 출력 3


#include <stdio.h>

void printCalc(int _input1, int _input2) {
// 이 부분을 구현하라 =====================

    int first = _input2 % 10;
    int second = _input2 / 10;
    
    printf("%d\n%d\n%d", _input1 * first, _input1 * second, _input1 * _input2);

// ========================================
}

int main() {
    int input1, input2;
    scanf("%d %d", &input1, &input2);

    printCalc(input1, input2);

    return 0;
}
