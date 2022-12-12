// 숫자로 입력된 year, month, day의 값을 조건에 맞게 문자열로 변형해 출력하고자 한다.

// 구조체 date 에는 전부 int 타입의 year, month, day를 담는 세 멤버가 있다.

// 아래 두 가지의 코드를 작성하라. main은 건들지 않는다.
// 1. date 구조체 변수 1개 birth를 선언하라.
// 2. ese_date()라는 함수를 작성하라. (함수의 프로토타입은 주어지지 않는다.)

// [ese_date()함수 안에서 해야할 일]
//  - 정수의 형태(%d)로 year, month, day 를 차례대로 입력받는다. (반드시 scanf 이용)
//  - 이제 이 세 정수를 문자열로 변환한 후, 각 멤버 값 사이를 '-'(하이픈)으로 이어 새로운 문자열을 만들어 str에 저장하라.

// (단, str은 최대 100자 미만의 문자열이며, 
// 입력 받은 세 정수는 실제 날짜처럼 ~4자, ~2자, ~2자 고정 형식이 아니라 int범위의 모든 수가 될 수 있다.
// , 즉 "20000-12345-1235" 도 얼마든지 가능하다.)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date;
void ese_date(struct date* birth, char str[100]);

// 구조체 정의
struct date {
    int year;
    int month;
    int day;
};

int main() {

    struct date birth;
    char str[100]; // 결과 문자열 저장되는 곳

    ese_date(&birth, str);

    printf("%s", str);
    return 0;
}


void ese_date(struct date* birth, char str[100]) {
    scanf("%d %d %d", &birth->year, &birth->month, &birth->day);

    int i = 0, j = 0;
    int temp;
    char tempstr[100];

    temp = birth->year;
    while (temp > 0) {
        tempstr[i++] = temp % 10 + '0';
        temp /= 10;
    }
    for (i = i - 1; i >= 0; i--) {
        str[j++] = tempstr[i];
    }
    str[j++] = '-';

    i = 0;
    temp = birth->month;
    while (temp > 0) {
        tempstr[i++] = temp % 10 + '0';
        temp /= 10;
    }
    for (i = i - 1; i >= 0; i--) {
        str[j++] = tempstr[i];
    }
    str[j++] = '-';

    i = 0;
    temp = birth->day;
    while (temp > 0) {
        tempstr[i++] = temp % 10 + '0';
        temp /= 10;
    }
    for (i = i - 1; i >= 0; i--) {
        str[j++] = tempstr[i];
    }
    str[j] = '\0';
}