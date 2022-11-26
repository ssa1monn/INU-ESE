// 2���� ���簢 �迭�� �����Ҵ� �ް�, �迭 ���� �ִ� ��� ������ ���� ����ϴ� ���α׷��̴�.
// ���� ������ �����Ͽ� makeArrayDynamic()  �� sumofArray() �� �Լ��� �����϶�.

// main �Լ� �ȿ�����
// - Ű����κ��� �Է��� �ϳ� �޾� size�� �����ϰ� �� ���� 2���� ���簢 �迭�� �� �� �� �������� �Ѵ�.
//   (���簢 �迭�� ��� ���� ����� ���� �����. [2 x 2], [3 x 3] ...)
// - ���� �����Ϳ� size�� ���� �Ѱ��־� [size x size] ũ���� �迭�� �������� �Ҵ� �޴� �Լ� makeArrayDynamic() �� ȣ���Ѵ�.
// - �迭�� ���� ���� ���������� �Է� �ް� �ȴ�.
// - �迭 ���� �ִ� ��� ������ ���� ����Ͽ� �����ϴ� �Լ� sumofArray()�� ȣ���Ѵ�.
//   (��, �迭 ���� �ִ� ������ ���� int �� �ִ�ũ�⸦ �Ѿ�� ������ ���� ���� �ʾƵ� �ȴ�.)
// - ���� ������ ���� sum�� ����ϰ�, �����Ҵ��� ����(free)�Ѵ�.
// <�ڵ� ���ø��� �Ʒ� Hint ����>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** makeArrayDynamic(int** _p, int _size);
int sumofArray(int** _p, int _size);

int main() {

    int** p = NULL;
    int size, sum = 0;

    scanf("%d", &size); // ���簢 �迭 ����� �Է¹���.

    // [size x size] ũ���� �迭 �����Ҵ�
    p = makeArrayDynamic(p, size);  // <- 1. �� �Լ� ����


    // �迭�� ���� ���� ���������� �Է�
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    // �迭 ���� �ִ� ��� ������ ��
    sum = sumofArray(p, size);   // <- 2. �� �Լ� ����

    printf("%d", sum); // �� ���

    // �����Ҵ� free
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