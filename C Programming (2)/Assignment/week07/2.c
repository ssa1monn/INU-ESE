#include <stdio.h>

void swap(int* a, int* b, int k[]) {
    int temp = *a;
    *a = *b;
    *b = temp;

    int length = 0;

    for (int i = 0; i < 100; i++) {
        if (k[i] == -1) {
            length = i - 1;
            break;
        }
    }

    for (int i = 0; i <= length / 2; i++) {
        int temp = k[i];
        k[i] = k[length - i];
        k[length - i] = temp;
    }
}

int main(void) {
    int i = 3, j = 5, k[6] = { 1, 2, 3, 4, 5, -1 };
    swap(&i, &j, k);
    printf("%d %d\n", i, j);
    for (int i = 0; k[i] != -1; i++) {
        printf("%d ", k[i]);
    }
}