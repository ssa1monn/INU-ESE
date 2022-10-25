// 배열의 원소 중 가장 큰 수와 가장 작은 수의 인덱스 차를 구하고자 한다.

// 1. 첫째 줄에 숫자하나를 입력.(n) 
// (단, n <= 100)
// 2. n개의 숫자를 더 입력받아 int 1차원 배열에 저장 (arr)
// 3. arr 배열의 원소 중 가장 큰 값과 가장 작은 값의 인덱스의 차이를 리턴하는 함수 diffMaxMin() 를 작성하라.
// (차 라는 것은 큰 수에서 작은 수를 뺀 값이다- 무조건 양수라는 소리)
// (단, 가장 큰 값과 가장 작은 값이 두 개이상 일 경우 더 작은 인덱스로 한다.)

// 배열을 인자로 하는 함수에 대해서는 고려하지 않아도 되고, main함수에서 배열을 다루듯이 사용하면 된다.
// 작성되어있는 헤더 파일(stdlib.h)을 사용해도 된다.

// 아래 코드를 복사해서 필요한 부분을 채우시오.
// 필요 시 추가적으로 함수를 작성해도 된다.
// 단, main 함수는 절대 건들지 않는다.

#include <stdio.h>
#include <stdlib.h>

int diffMaxMin(int arr[], int n) {
// 이 부분에 코드를 작성하시오. ===========================

    int maxIDX = 0;
    int minIDX = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[maxIDX]) {
            maxIDX = i;
        }
        if(arr[i] < arr[minIDX]) {
            minIDX = i;
        }
    }

    return maxIDX - minIDX;

// ========================================================
}


int main() {

    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", diffMaxMin(arr, n));
    return 0;
}