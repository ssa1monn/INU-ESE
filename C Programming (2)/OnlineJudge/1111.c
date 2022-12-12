// 동적할당을 활용하여 각 행의 합을 출력하고자 한다.
// 2차원 배열의 행과 열의 개수인 x, y가 차례로 입력된다.

// x행, y열 사이즈의 2차원 int 배열을 동적으로 할당받고, 
// 이 배열에 순차적으로 총 x*y개의 원소를 입력 받는다. (반드시 scanf이용)

// 각 행마다 모든 원소(y개)의 합을 저장하는 int 배열 sum을 동적 할당 받아 저장하고,
// 이 sum 배열의 값을 한 줄에 하나씩 출력하라.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int **arr = (int**)malloc(sizeof(int*) * x);
    for (int i = 0; i < x; i++) {
        arr[i] = (int*)malloc(sizeof(int) * y);
    }

    int *sum = (int*)malloc(sizeof(int) * x);
    for (int i = 0; i < x; i++) {
        sum[i] = 0;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        printf("%d ", sum[i]);
    }
    for (int i = 0; i < x; i++) {
        free(arr[i]);
    }
    free(arr);
    free(sum);

    return 0;
}