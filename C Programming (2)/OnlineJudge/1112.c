// 대문자만 뒤로 빼서 복사하는 문자열 함수를 만들고자 한다.
// arr 배열에 100자 미만의 문자열이 입력되고,
// 이 문자열 중 영어 대문자만 순서대로 뒤로 빼서 result 복사하여 저장하고자 한다.
// 아래 코드를 참고하여 esestrcpy() 함수를 작성하시오.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esestrcpy(char arr[100], char result[100]);

int main(void)
{
    char arr[100];
    char result[100];

    scanf("%s", arr);

    esestrcpy(arr, result);

    printf("%s", result); 
    return 0;
}

void esestrcpy(char arr[100], char result[100]) {
    int i = 0, j = 0;

    while (arr[i] != '\0') {
        if (arr[i] < 'A' || arr[i] > 'Z') {
            result[j] = arr[i];
            j++;
        }
        i++;
    }

    i = 0;

    while (arr[i] != '\0') {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            result[j] = arr[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';
}