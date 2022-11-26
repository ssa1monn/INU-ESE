// 2차원 정사각 배열을 동적할당 받고, 배열 내에 있는 모든 원소의 합을 출력하는 프로그램이다.
// 다음 내용을 참고하여 makeArrayDynamic()  와 sumofArray() 두 함수를 구현하라.

// main 함수 안에서는
// - 키보드로부터 입력을 하나 받아 size에 져장하고 이 값을 2차원 정사각 배열의 행 과 열 사이즈라고 한다.
//   (정사각 배열은 행과 열의 사이즈가 같은 행렬임. [2 x 2], [3 x 3] ...)
// - 더블 포인터와 size의 값을 넘겨주어 [size x size] 크기의 배열을 동적으로 할당 받는 함수 makeArrayDynamic() 를 호출한다.
// - 배열의 원소 값을 순차적으로 입력 받게 된다.
// - 배열 내에 있는 모든 원소의 합을 계산하여 리턴하는 함수 sumofArray()를 호출한다.
//   (단, 배열 내에 있는 원소의 합이 int 의 최대크기를 넘어가지 않으니 걱정 하지 않아도 된다.)
// - 합을 저장한 변수 sum을 출력하고, 동적할당을 해제(free)한다.
// <코드 템플릿은 아래 Hint 참고>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** makeArrayDynamic(int** _p, int _size);
int sumofArray(int** _p, int _size);

int main() {

    int** p = NULL;
    int size, sum = 0;

    scanf("%d", &size); // 정사각 배열 사이즈를 입력받음.

    // [size x size] 크기의 배열 동적할당
    p = makeArrayDynamic(p, size);  // <- 1. 이 함수 구현


    // 배열에 원소 값을 순차적으로 입력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    // 배열 내에 있는 모든 원소의 합
    sum = sumofArray(p, size);   // <- 2. 이 함수 구현

    printf("%d", sum); // 합 출력

    // 동적할당 free
    for (int i = 0; i < size; i++) free(p[i]);
    free(p);

    return 0;
}

int** makeArrayDynamic(int** _p, int _size) {
    _p = (int**)malloc(sizeof(int*) * _size);
    for (int i = 0; i < _size; i++) {
        _p[i] = (int*)malloc(sizeof(int) * _size);
    }
    return _p;
}

int sumofArray(int** _p, int _size) {
    int sum = 0;
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            sum += _p[i][j];
        }
    }
    return sum;
}