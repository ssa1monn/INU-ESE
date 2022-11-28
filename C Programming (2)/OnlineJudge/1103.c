// [3x4] �迭�� ��� ���Ҹ� ���� �� �ϴ� ���α׷��̴�.
// ���� ������ �����Ͽ�  scalarMultiple() �Լ��� �����ϰ�, main �Լ����� ������ ���ڸ� ��� ȣ���϶�.

// [3x4] �������� 2���� �迭 arr�� �ְ�, ���� ��(��Į���)�� �� ���� n�� �ִ�. (x n �� �ϰڴ� �Ҹ�.)
// n�� arr�� ���Ҹ� ���������� �Է¹ްԵȴ�.
// ���� arr�� ��� ���Ҹ� n�踦 �ϴ� �Լ� scalarMultiple()�� ������ ���ڸ� ��� ȣ���Ѵ�.
// (n�谡 ��) 2���� �迭 arr�� ����Ѵ�.

// n�谡 �� ����  int �� �ִ� ũ�⸦ �Ѿ�� ������, �������� �ʾƵ� �ȴ�.
// n�� 0 �Ǵ� ����� ���´�.

// <�ڵ� ���ø��� �Ʒ� Hint ����>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// scalarMultiple �Լ� ���� ====================

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

    // �Է�
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // scalarMultiple �Լ� ȣ�� �κ� (���⿡ �ۼ�)==========
    scalarMultiple(arr, n);
    // =====================================

    // ���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}