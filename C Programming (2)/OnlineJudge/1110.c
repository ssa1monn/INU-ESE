// [3x3] 사이즈의 2차원 배열 arr이 있다.
// 다음 3가지 함수를 모두 구현하라. 프로토 타입은 주어지지 않으니 적절한 매개변수와 함께 직접 정의하라.

// 이 배열을 인자로 넘겨 scanf로 입력받는 함수 inputarr()를 구현하고,
// 9개의 원소로 채워진 배열의 주 대각요소만 남겨놓고 나머지는 0으로 만드는 함수 makeDiagonal()를 구현하고,
// 마지막으로 배열 전체를 한 줄에 한 행을, 각 요소는 공백을 기준으로 출력하는 함수 printarr()를 구현하라.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 호출 형태를 보고 알아서 작성.
void inputarr(int arr[3][3]);
void makeDiagonal(int arr[3][3]);
void printarr(int arr[3][3]);

int main() {

    int arr[3][3];
    inputarr(arr);
    makeDiagonal(arr);
    printarr(arr);

    return 0;
}

void inputarr(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void makeDiagonal(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                arr[i][j] = 0;
            }
        }
    }
}

void printarr(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            if (j == 2) {
                printf("\n");
            }
        }
    }
}