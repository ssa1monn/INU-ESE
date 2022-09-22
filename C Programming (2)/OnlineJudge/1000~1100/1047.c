// int 타입의 정수 n이 입력된다.
// 0 부터 n까지의 정수를 공백을 두고 순서대로 출력하는 프로그램을 작성하라.
// 단, n이 음수일 경우 "negative" 라고 출력한다.

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