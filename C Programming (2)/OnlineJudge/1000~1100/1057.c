// 99�� ������ ���� ���� ���ڿ��� �ϳ� �Էµȴ�.
// �� ���ڿ��� �������� ����ϴ� ���α׷��� ������.

// ��, �������� ������ ��� �� ���� ù�� ° ���ڰ� ���� �ҹ��ڶ�� �� ���ڸ� �빮�ڷ� �ٲپ� ����϶�.

// �ڵ�� ���� ���� �����Ӱ� �ۼ��ϸ� �ȴ�.

#include <stdio.h>

int main(void) {
    char str[100];
    scanf("%s", str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        if (i == length - 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        printf("%c", str[i]);
    }

    return 0;
}