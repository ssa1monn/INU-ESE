// 중첩 구조체 배열을 정의하고, 생년월일이 빠른 사람부터 늦은 사람 순으로 정렬하고자 한다.
// date라는 구조체는 int 타입의 year, month, day를 가지고 있다. (각각 년, 월 일로 생각한다.)

// student라는 구조체는 "10자 미만의 char를 저장할 수 있는 name"과, 
// "int 타입의 number", "위에서 정의한 date 구조체 타입의 birthday"를 멤버로 가지고 있다.
// (birthday는 태어난 날짜를 의미하며, 년-월-일 순으로 비교한다.)

// 10 이하의 정수 n을 입력 받은 후,
// n명의 name, number, birthday의 year, month, day 순으로 차례로 입력 받아 저장한다.

// n명의 사람 중, birthday(생년월일)가 빠른 사람부터(=일찍 태어난 사람 = 나이 더 많은 사람) 순서대로 정렬하여
// 각 멤버의 값은 공백으로 구분하고, 한 줄에 하나 씩 정렬된 결과로 출력하라. (출력 예시 참고)
// 출력 멤버의 순서는 입력과 동일하게 name, number, birthday(year, month, day) 순으로 공백을 구분으로 출력.

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    char name[10];
    int number;
    struct date birthday;
};

int main(void) {
    int n;
    scanf("%d", &n);
    struct student s[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %d", s[i].name, &s[i].number, &s[i].birthday.year, &s[i].birthday.month, &s[i].birthday.day);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j].birthday.year > s[j + 1].birthday.year) {
                struct student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
            else if (s[j].birthday.year == s[j + 1].birthday.year) {
                if (s[j].birthday.month > s[j + 1].birthday.month) {
                    struct student temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
                else if (s[j].birthday.month == s[j + 1].birthday.month) {
                    if (s[j].birthday.day > s[j + 1].birthday.day) {
                        struct student temp = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", s[i].name, s[i].number, s[i].birthday.year, s[i].birthday.month, s[i].birthday.day);
    }

    return 0;
}