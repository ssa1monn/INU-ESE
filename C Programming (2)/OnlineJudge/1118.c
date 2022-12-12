// �ִ� 100�� �̸��� ���ڿ��� �Էµȴ�.
// �� ���ڿ��� ���� �� ���ڿ� �ش��ϴ� ���ڸ� ��� �ѱ� �б� ������ ���ڿ��� ��ȯ�ϴ� �Լ� str2korean()�� �����ϰ��� �Ѵ�.

// ������� "123abc456" �̶�� ���ڿ� data�� �ԷµǾ��ٸ�,
// ���ڹ����� 1,2,3,4,5,6�� ������ ���� 123456�� �ȴ�.
// �̸� �ѱ۷� ������ "�ϸ���õ����ʿ�" �� �ǰ�, �� ���� result ���� �迭�� �����ϴ� �Լ� str2korean()�� �ۼ��϶�.

// ��, ������ ���� "��"�� ������ ������, ���⼭�� ��� �е��� �Ѵ�.
// ��, 101 : "�Ϲ���", 110 : "�Ϲ��Ͻ�", 111 : "�Ϲ��Ͻ���" �� �����϶�� ���Դϴ�.

// ��, �ԷµǴ� �ִ� ���ڴ� 100 �̸� �̵�, �� �� ���� ���ڴ� 5 �ڰ� �Ѿ�� �ʰ� �־�����. (�ִ� 99999:������õ���鱸�ʱ�)
// ���ڰ� ���� ��쳪, 0�� ���� "��"�̶�� ����ϸ�ȴ�.

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

    char* num[10] = { "��", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��" };
    char* unit[5] = { "��", "��", "õ", "��", "��" };

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