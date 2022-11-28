// �������� �Ҵ��� 2���� �迭�� ��ġ(transpose)��Ű���� �Ѵ�.
// ��ġ��, ��� ���� ��ȯ�ϴ� ���·� �Ʒ� �׸����� ���� ����� ��ġ ��Ű�� ������ ���°� �ȴ�.

// ���� ���� �� ���� �Էµȴ�. ������� a, b��� �غ���. (a�� b�� 1�̻� ~ �ִ� ������� ����. �������� �Ҵ��� �Ŵϱ�)
// ù ��° 2���� �迭 p�� [a x b] ������� �������� �Ҵ��Ѵ�. (malloc �ݵ�� �̿�, ���� �迭 ��� ����)
// �� �迭 p�� ��ġ ���� 2���� �迭 q�� �����Ѵ�. ( q�� ������� [b x a]�� �ȴ�. )

// ��ġ��Ų �迭 q�� �� �࿡ �ϳ� �� ����Ѵ�. (�Ʒ� ����� ���� ����)

// <�ڵ� ���ø��� �Ʒ� Hint ����>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int** p = NULL;
    int** q = NULL;

    int a, b; // ������� ��, ��
    scanf("%d %d", &a, &b);

    // �ڵ� �ۼ� ==============================

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

    // ���
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    // �����Ҵ� free
    for (int i = 0; i < a; i++) free(p[i]);
    free(p);
    for (int i = 0; i < b; i++) free(q[i]);
    free(q);

    return 0;
}