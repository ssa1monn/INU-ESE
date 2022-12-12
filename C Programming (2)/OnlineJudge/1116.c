// ��ø ����ü �迭�� �����ϰ�, ��������� ���� ������� ���� ��� ������ �����ϰ��� �Ѵ�.
// date��� ����ü�� int Ÿ���� year, month, day�� ������ �ִ�. (���� ��, �� �Ϸ� �����Ѵ�.)

// student��� ����ü�� "10�� �̸��� char�� ������ �� �ִ� name"��, 
// "int Ÿ���� number", "������ ������ date ����ü Ÿ���� birthday"�� ����� ������ �ִ�.
// (birthday�� �¾ ��¥�� �ǹ��ϸ�, ��-��-�� ������ ���Ѵ�.)

// 10 ������ ���� n�� �Է� ���� ��,
// n���� name, number, birthday�� year, month, day ������ ���ʷ� �Է� �޾� �����Ѵ�.

// n���� ��� ��, birthday(�������)�� ���� �������(=���� �¾ ��� = ���� �� ���� ���) ������� �����Ͽ�
// �� ����� ���� �������� �����ϰ�, �� �ٿ� �ϳ� �� ���ĵ� ����� ����϶�. (��� ���� ����)
// ��� ����� ������ �Է°� �����ϰ� name, number, birthday(year, month, day) ������ ������ �������� ���.

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