// [3x4] 배열의 모든 원소를 정수 배 하는 프로그램이다.
// 다음 내용을 참고하여  scalarMultiple() 함수를 구현하고, main 함수에서 적절한 인자를 담아 호출하라.

// [3x4] 사이즈의 2차원 배열 arr이 있고, 정수 배(스칼라곱)를 할 값인 n이 있다. (x n 배 하겠단 소리.)
// n과 arr의 원소를 순차적으로 입력받게된다.
// 이후 arr의 모든 원소를 n배를 하는 함수 scalarMultiple()를 적당한 인자를 담아 호출한다.
// (n배가 된) 2차원 배열 arr를 출력한다.

// n배가 된 값은  int 의 최대 크기를 넘어가지 않으니, 걱정하지 않아도 된다.
// n은 0 또는 양수만 들어온다.

// <코드 템플릿은 아래 Hint 참고>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// scalarMultiple 함수 구현 ====================

void scalarMultiple(int* _arr, int _n) {
    for(int i = 0; i < 12; i++) {
        *(_arr + i) *= _n;  // _arr[i] *= _n;
    }
}

// ===================================

int main() {

    int arr[3][4];
    int n = 0;
    scanf("%d", &n);

    // 입력
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // scalarMultiple 함수 호출 부분 (여기에 작성)==========
    scalarMultiple(arr, n);
    // =====================================

    // 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}