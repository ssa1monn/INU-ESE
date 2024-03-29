// unsigned int 형태의 최대 100행을 받을 수 있는 2열짜리 2차원 배열이 있다. (최대 100*2)
// 첫째 줄에는 n 이 입력되고, n개의 행을 입력 받도록 한다.
// 이 배열에 10진수 형태로 각 요소의 값을 키보드로부터 입력 받게 된다.

// 배열의 각 행에 대해서
// 첫 번째 열이 10 이면, 두 번째 열의 10진수 형태 중 0의 개수를 출력하고,
// 첫 번째 열이 2이면, 두 번재 열의 2진수 형태 중 0의 개수를 출력하고,
// 첫 번째 열이 16이면, 두 번재 열의 16진수 형태 중 0의 개수를 출력하고,

// 첫 번째 열이 2, 10, 16 모두 아니라면 그냥 0을 출력한다.

// 세 행에 대해서 0의 갯수에 대한 결과를 공백을 두고 출력하라.
// 그냥 0의 경우는 0이 없는 것으로 한다. (0 출력)

// 예를 들어 아래와 같이 입력되었다고 해보자.
// n = 4 일 때,
// 10	300
// 2	1234
// 16	64
// 10	0- 첫 번째 행의 첫번째 열은 10이다. 300을 10진수로 나타낸 표현에서 0의 개수는 2이다.
// - 두번째 행의 첫번째 열은 2이다. 1234를 2진수로 나타낸 표현은 100 1101 0010 이고, 0의 개수는 6개이다.
// - 세번째 행의 첫번째 열은 16이다. 64를 16진수로 나타낸 표현은 40이고, 0의 개수는 1이다.
// - 네번째 행의 첫번째 열은 10이다. 0은 그냥 0을 출력한다.

// 다른 코드는 건드릴 수 없다.
// 헤더파일 추가 X,  기본 입출력 함수 외에는 모두 정의해서 사용 해야 함.

#include <stdio.h>
#define MAX 100

int main() {

    unsigned int arr[MAX][2];
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 이 부분에 코드를 작성하세요. ===========================

    for(int i = 0; i < n; i++) {
        if(arr[i][0] == 2 || arr[i][0] == 10 || arr[i][0] == 16) {
            int count = 0;
            while(arr[i][1] != 0) {
                if(arr[i][1] % arr[i][0] == 0) {
                    count++;
                }
                arr[i][1] /= arr[i][0];
            }
            printf("%d ", count);
        } else {
            printf("0 ");
        }
    }

    // ========================================================

    return 0;
}