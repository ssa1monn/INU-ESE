// 1. 100 ������ ���� �� ���� �Էµȴ�. (���ʷ� a, b)
// 2. a*b �������� �Է��� �޾� 2���� �迭 arr1�� ������� ����
// ex) 2*3 ����̶�� �ϸ� �Ʒ� ������ ����
// 1	2	3
// 4	5	6
// 3.  100 ������ ���� �� ���� �Էµȴ�. (���ʷ� c, d)
// 4. c*d �������� �Է��� �޾� 2���� �迭(arr2)�� ������� ����
// 5. �Էµ� �� 2���� �迭(arr1, arr2)�� ����� ���� ������ �� ����� ����ϴ� ���α׷��� �ۼ��϶�.

// [���ǻ���] 
// - arr1 [axb] �� arr2 [cxd] �� ��� ���� �� ����� ������� [axd] �̴�. 
// - ����� ������ ������ ��ġ���� ������ (b != c) �̸� ��� �� ������ �Ұ����ϴ�.
// - �Ұ����� ��� �ֿܼ� "Unavailable" �� ����ϰ� ���α׷��� �����Ѵ�.
// - ����� ������ ���� ����Ͽ� ��� ���·� ����Ѵ�. (��� ���� ����)

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