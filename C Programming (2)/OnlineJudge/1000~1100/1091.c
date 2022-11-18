// [2x100]짜리 2차원 배열 arr이 있다.
// 첫 번째 행과 두 번째 행에 각각 문자열을 입력하고, 
// 이 두 문자열이 조건에 맞는지 비교하는 함수 cmp()를 작성하라.

// [조건] 
//     - 두 문자열은 문자들은 같되, 반드시 영문 소문자 대문자가 반대로 저장되어 있어야 한다. (즉 하나의 문자열에 "abc"가 있으면 다른 문자열은 "ABC"이어야 두 문자열은 같은 것이다.)
//     - 영문자를 제외한 숫자, 문자는 모두 그대로 같아야 한다.
//     - 위 조건에 모두 맞으면 함수는 1을 리턴하게 한다.
//     - 조건에 하나라도 위배되면 -1을 리턴한다.

// (예시) 
// "aBc123" - "AbC123" 는 조건에 만족합니다. (1 리턴)(모두 맞음)
// "abc" - "abc" 는 조건에 위배됩니다. (-1 리턴)(대소문자가 반대로 되어 있지 않음)
// "abc@#" - "aBC@#"은 조건에 위배됩니다. (-1)(a 가 양쪽 모두 소문자임) 

// 아래 코드에 선언된 형태로 형태에 맞추어 함수 cmp()를 구현하라.
// 단, main 함수는 건들 수 없으며, 다른 헤더파일은 사용할 수 없음. (표준문자열함수 <string.h> 사용 절대 금지. 0 점 처리함.>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp(char src[][100]);

int main(void)
{
    char arr[2][100];

    scanf("%s", arr[0]);
    scanf("%s", arr[1]);

    printf("%d", cmp(arr)); // 1 또는 -1이 리턴되어 출력 되는 형태

    return 0;
}

int cmp(char src[][100])
{
    for(int i = 0; src[0][i] != '\0' || src[1][i] != '\0'; i++) {
        if(src[0][i] >= 'A' && src[0][i] <= 'z' && src[1][i] >= 'A' && src[1][i] <= 'z') {
            if(src[0][i] - 32 == src[1][i]) continue;
            else if(src[0][i] + 32 == src[1][i]) continue;
            else return -1;
        }
        else {
            if(src[0][i] == src[1][i]) continue;
            else return -1;
        }
    }
    return 1;
}