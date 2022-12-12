// 변수 10개를 오름차순으로 정렬하고자 한다.
// main 에 정의된 int 타입의 정수 10개가 있다.
// 이 10개의 변수 a, b, c, d, e, f, g, h, i, j의 주소를 인수로 받아 변수 값을 오름차순으로 정렬하여 (오름차순 : 작은 수에서 부터 큰 수)
// 변수의 값을 갱신하려고 한다.

// 아래 코드 템플릿을 참고하여 sort()함수를 작성하라.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int* a, int* b, int* c, int* d, int* e, int* f, int* g, int* h, int* i, int* j);

int main(void) {

    int a, b, c, d, e, f, g, h, i, j;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    sort(&a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j);

    return 0;
}

void sort(int* a, int* b, int* c, int* d, int* e, int* f, int* g, int* h, int* i, int* j) {
    int* arr[10] = { a, b, c, d, e, f, g, h, i, j };
    int temp;

    for (int i = 0; i < 10; i ++) {
        for (int j = i + 1; j < 10; j++) {
            if (*arr[i] > *arr[j]) {
                temp = *arr[i];
                *arr[i] = *arr[j];
                *arr[j] = temp;
            }
        }
    }
}