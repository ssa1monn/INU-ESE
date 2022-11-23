// 1. 100 이하의 숫자 두 개가 입력된다. (차례로 a, b)
// 2. a*b 사이즈의 입력을 받아 2차원 배열 arr1에 순서대로 저장
// ex) 2*3 행렬이라고 하면 아래 순서로 저장
// 1	2	3
// 4	5	6
// 3.  100 이하의 숫자 두 개가 입력된다. (차례로 c, d)
// 4. c*d 사이즈의 입력을 받아 2차원 배열(arr2)에 순서대로 저장
// 5. 입력된 두 2차원 배열(arr1, arr2)를 행렬의 곱셈 연산을 한 결과를 출력하는 프로그램을 작성하라.

// [주의사항] 
// - arr1 [axb] 와 arr2 [cxd] 의 행렬 곱을 한 결과의 사이즈는 [axd] 이다. 
// - 행렬의 사이즈 조건이 일치하지 않으면 (b != c) 이면 행렬 곱 연산은 불가능하다.
// - 불가능한 경우 콘솔에 "Unavailable" 를 출력하고 프로그램을 종료한다.
// - 계산이 가능한 경우는 계산하여 행렬 형태로 출력한다. (출력 예시 참고)

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr1[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int c, d;
    scanf("%d %d", &c, &d);
    int arr2[c][d];

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    if (b != c) {
        printf("Unavailable");
        return 0;
    }

    int arr3[a][d];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < b; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}