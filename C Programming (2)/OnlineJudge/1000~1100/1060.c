#include <stdio.h>

int main() {

    unsigned int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 이 부분에 코드를 작성하세요. ===========================

    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == 10) {
            unsigned int num = (unsigned int)arr[i][1];
            int count = 0;
            while (num != 0) {
                if (num % 10 == 0) {
                    count++;
                }
                num /= 10;
            }
            printf("%d ", count);
        }
        else if (arr[i][0] == 16) {
            unsigned int num = (unsigned int)arr[i][1];
            int count = 0;
            while (num != 0) {
                if (num % 16 == 0) {
                    count++;
                }
                num /= 16;
            }
            printf("%d ", count);
        }
        else printf("0 ");
    }
	
    // ==============================================

    return 0;
}