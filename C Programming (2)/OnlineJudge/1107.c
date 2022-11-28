// 동적으로 할당한 2차원 배열을 전치(transpose)시키고자 한다.
// 전치란, 행과 열을 교환하는 형태로 아래 그림에서 왼쪽 행렬을 전치 시키면 오른쪽 형태가 된다.

// 양의 정수 두 개가 입력된다. 순서대로 a, b라고 해보자. (a와 b는 1이상 ~ 최대 사이즈는 없다. 동적으로 할당할 거니까)
// 첫 번째 2차원 배열 p는 [a x b] 사이즈로 동적으로 할당한다. (malloc 반드시 이용, 정적 배열 사용 금지)
// 이 배열 p를 전치 시켜 2차원 배열 q에 저장한다. ( q의 사이즈는 [b x a]가 된다. )

// 전치시킨 배열 q를 한 행에 하나 씩 출력한다. (아래 입출력 예시 참고)

// <코드 템플릿은 아래 Hint 참고>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int** p = NULL;
    int** q = NULL;

    int a, b; // 순서대로 행, 열
    scanf("%d %d", &a, &b);

    // 코드 작성 ==============================

    p = (int**)malloc(sizeof(int*) * a);
    for (int i = 0; i < a; i++) {
        p[i] = (int*)malloc(sizeof(int) * b);
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++){
            scanf("%d", &p[i][j]);
        }
    }

    q = (int**)malloc(sizeof(int*) * b);
    for (int i = 0; i < b; i++) {
        q[i] = (int*)malloc(sizeof(int) * a);
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            q[j][i] = p[i][j];
        }
    }

    // ====================================

    // 출력
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    // 동적할당 free
    for (int i = 0; i < a; i++) free(p[i]);
    free(p);
    for (int i = 0; i < b; i++) free(q[i]);
    free(q);

    return 0;
}