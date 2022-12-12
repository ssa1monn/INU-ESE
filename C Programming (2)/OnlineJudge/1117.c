// ���ڷ� �Էµ� year, month, day�� ���� ���ǿ� �°� ���ڿ��� ������ ����ϰ��� �Ѵ�.

// ����ü date ���� ���� int Ÿ���� year, month, day�� ��� �� ����� �ִ�.

// �Ʒ� �� ������ �ڵ带 �ۼ��϶�. main�� �ǵ��� �ʴ´�.
// 1. date ����ü ���� 1�� birth�� �����϶�.
// 2. ese_date()��� �Լ��� �ۼ��϶�. (�Լ��� ������Ÿ���� �־����� �ʴ´�.)

// [ese_date()�Լ� �ȿ��� �ؾ��� ��]
//  - ������ ����(%d)�� year, month, day �� ���ʴ�� �Է¹޴´�. (�ݵ�� scanf �̿�)
//  - ���� �� �� ������ ���ڿ��� ��ȯ�� ��, �� ��� �� ���̸� '-'(������)���� �̾� ���ο� ���ڿ��� ����� str�� �����϶�.

// (��, str�� �ִ� 100�� �̸��� ���ڿ��̸�, 
// �Է� ���� �� ������ ���� ��¥ó�� ~4��, ~2��, ~2�� ���� ������ �ƴ϶� int������ ��� ���� �� �� �ִ�.
// , �� "20000-12345-1235" �� �󸶵��� �����ϴ�.)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date;
void ese_date(struct date* birth, char str[100]);

// ����ü ����
struct date {
    int year;
    int month;
    int day;
};

int main() {

    struct date birth;
    char str[100]; // ��� ���ڿ� ����Ǵ� ��

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