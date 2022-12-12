// �����Ҵ��� Ȱ���Ͽ� �� ���� ���� ����ϰ��� �Ѵ�.
// 2���� �迭�� ��� ���� ������ x, y�� ���ʷ� �Էµȴ�.

// x��, y�� �������� 2���� int �迭�� �������� �Ҵ�ް�, 
// �� �迭�� ���������� �� x*y���� ���Ҹ� �Է� �޴´�. (�ݵ�� scanf�̿�)

// �� �ึ�� ��� ����(y��)�� ���� �����ϴ� int �迭 sum�� ���� �Ҵ� �޾� �����ϰ�,
// �� sum �迭�� ���� �� �ٿ� �ϳ��� ����϶�.

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