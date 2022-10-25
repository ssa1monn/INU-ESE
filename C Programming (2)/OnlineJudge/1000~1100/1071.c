// 아래 조건에 맞게 정렬 과정을 하나씩 출력하는 함수 printSort()를 작성하라.

// int 로 구성된 최대 100개의 1차원 배열을 오름차순으로 정렬하고자 한다.
// 입력의 첫번째 줄에는 정렬할 원소의 갯수가 입력되며, 두번째 줄에는 공백을 구분으로 원소가 차례대로 입력된다.

// 배열의 모든 요소를 탐색해서 가장 작은 수를 찾아 맨 앞으로 가져오고, (자리를 바꿈)
// 그 다음 요소부터 탐색해서 가장 작은 수를 찾아 두 번째 요소와 바꾸어 넣는다.
// 같은 방법으로 탐색한 수 중 가장 작은 수를 앞에서부터 쌓아 나가는 방식으로 정렬을 하고자 한다.

// 예를들어, 배열의 요소가 차례대로 [5, 4, 3, 1, 2] 일 때,
// - 가장 작은 1과 첫 번째 자리인 5을 바꾼다. [1, 4, 3, 5, 2]
// - 그 다음 작은 2와 두 번째 자리인 4을 바꾼다. [1, 2, 3, 5, 4]
// - 그 다음 작은 3와 세 번째 자리인 4을 바꾼다. [1, 2, 3, 5, 4] (바꾸었지만 그대로)
// - 그 다음 작은 3와 세 번째 자리인 4을 바꾼다. [1, 2, 3, 4, 5]

// 위 처럼 원소가 5개이면, 4회의 cycle을 수행한다.
// 이와 같은 방법으로 정렬을 하여 각 cycle의 원소를 순차적으로 출력하는 프로그램을 작성하라.
// 이미 정렬되어 바뀌지 않아도 그대로 출력한다.

// 주어진 형태에 맞게 printSort() 함수를 구현하고, main 함수는 건들지 않는다.
// - 추가로 필요한 함수는 정의해도 된다.
// - 추가로 메크로 상수, 함수 사용이 가능하다.(#define)
// - 추가 헤더파일 include 안됨!, 기본 입출력 함수 외에는 모두 직접 프로그래밍해서 사용할 것.

#include <stdio.h>
#define SIZE 100

void printSort(int list[], int n);

int main()
{
    int list[SIZE];

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printSort(list, n);

    return 0;
}

void printSort(int list[], int n) {
    int temp, minIDX;
    for(int i = 0; i < n - 1; i++) {
        minIDX = i;
        for(int j = i; j < n; j++) {
            if(list[minIDX] > list[j]) {
                minIDX = j;
            }
        }
        temp = list[i];
        list[i] = list[minIDX];
        list[minIDX] = temp;
        for(int k = 0; k < n; k++) {
            printf("%d ", list[k]);
        }
        printf("\n");
    }
}