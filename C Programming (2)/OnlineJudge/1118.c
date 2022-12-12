// 최대 100자 미만의 문자열이 입력된다.
// 이 문자열의 문자 중 숫자에 해당하는 문자만 골라 한글 읽기 형태의 문자열로 변환하는 함수 str2korean()를 구현하고자 한다.

// 예를들어 "123abc456" 이라는 문자열 data가 입력되었다면,
// 숫자문자인 1,2,3,4,5,6만 가져와 숫자 123456이 된다.
// 이를 한글로 읽으면 "일만이천삼백사십오" 가 되고, 이 값을 result 문자 배열에 저장하는 함수 str2korean()를 작성하라.

// 단, 보통의 경우는 "일"은 말하지 않지만, 여기서는 모두 읽도록 한다.
// 즉, 101 : "일백일", 110 : "일백일십", 111 : "일백일십일" 로 저장하라는 뜻입니다.

// 단, 입력되는 최대 문자는 100 미만 이되, 그 중 숫자 문자는 5 자가 넘어가지 않게 주어진다. (최대 99999:구만구천구백구십구)
// 숫자가 없는 경우나, 0인 경우는 "영"이라고 출력하면된다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void str2korean(char data[100], char result[100]);

int main(void) {

    char data[100];
    char result[100];

    scanf("%s", data);

    str2korean(data, result);
    printf("%s", result);

}

void str2korean(char data[100], char result[100]) {

    int len;
    int cnt = 0;
    int unitcnt = 0;
    int temp;

    for (len = 0; data[len] != '\0'; len++);

    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] >= '0' && data[i] <= '9') {
            unitcnt++;
        }
    }

    char* num[10] = { "영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구" };
    char* unit[5] = { "십", "백", "천", "만", "억" };

    for (int i = 0; i < len; i++) {
        if (data[i] == '0') {
            unitcnt--;
        }

        if (data[i] >= '1' && data[i] <= '9') {
            result[cnt++] = num[data[i] - '0'][0];
            result[cnt++] = num[data[i] - '0'][1];
            result[cnt++] = num[data[i] - '0'][2];

            if (unitcnt != 1) {
                result[cnt++] = unit[unitcnt - 2][0];
                result[cnt++] = unit[unitcnt - 2][1];
                result[cnt++] = unit[unitcnt - 2][2];
            }

            unitcnt--;
        }
    }

    if (cnt == 0) {
        result[cnt++] = num[0][0];
        result[cnt++] = num[0][1];
        result[cnt++] = num[0][2];
    }

    result[cnt] = '\0';
}