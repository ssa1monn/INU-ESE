// [3x3] �������� 2���� �迭 arr�� �ִ�.
// ���� 3���� �Լ��� ��� �����϶�. ������ Ÿ���� �־����� ������ ������ �Ű������� �Բ� ���� �����϶�.

// �� �迭�� ���ڷ� �Ѱ� scanf�� �Է¹޴� �Լ� inputarr()�� �����ϰ�,
// 9���� ���ҷ� ä���� �迭�� �� �밢��Ҹ� ���ܳ��� �������� 0���� ����� �Լ� makeDiagonal()�� �����ϰ�,
// ���������� �迭 ��ü�� �� �ٿ� �� ����, �� ��Ҵ� ������ �������� ����ϴ� �Լ� printarr()�� �����϶�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� ȣ�� ���¸� ���� �˾Ƽ� �ۼ�.
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