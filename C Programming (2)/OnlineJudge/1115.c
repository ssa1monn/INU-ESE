// ���� 10���� ������������ �����ϰ��� �Ѵ�.
// main �� ���ǵ� int Ÿ���� ���� 10���� �ִ�.
// �� 10���� ���� a, b, c, d, e, f, g, h, i, j�� �ּҸ� �μ��� �޾� ���� ���� ������������ �����Ͽ� (�������� : ���� ������ ���� ū ��)
// ������ ���� �����Ϸ��� �Ѵ�.

// �Ʒ� �ڵ� ���ø��� �����Ͽ� sort()�Լ��� �ۼ��϶�.

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