// int Ÿ���� ���� n�� �Էµȴ�.
// 0 ���� n������ ������ ������ �ΰ� ������� ����ϴ� ���α׷��� �ۼ��϶�.
// ��, n�� ������ ��� "negative" ��� ����Ѵ�.

#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("negative");
    } else {
        for (int i = 0; i <= n; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}