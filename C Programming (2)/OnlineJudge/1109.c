// 2���� ������ �迭�� �����Ҵ����� ���ڿ��� �Է¹ް�, ����ϴ� ���α׷��̴�.
// �����͹迭 char* str[6] �� �ִ�. 

// ������ �迭 str �� �� ���(�� 6��)�� �����Ҵ�(malloc)���� �ִ� 99�ڸ� ������ �� �ִ� ���ڿ� ������ �Ҵ� �ް�
// scanf�� 6���� ���ڿ��� �Է��� �޴� �Լ� makeArrayandInput() �� �����϶�. (�ڵ� ¥����)

// ����, main������ �Էµ� ���ڿ��� �ϳ� �� ����ϰ�, �����Ҵ��� �����ϰ� �ȴ�. (�ڵ� �־���)

// <�ڵ� ���ø��� �Ʒ� Hint ����>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void makeArrayandInput(char **str);

int main() {

    char* str[6];

    makeArrayandInput(str);

    // ���
    for (int j = 0; j < 6; j++)
    {
        printf("%s\n", str[j]);
    }

    // �����Ҵ� free
    for (int i = 0; i < 6; i++) free(str[i]);

    return 0;
}


void makeArrayandInput(char **str) {
    for(int i = 0; i < 6; i++) {
        
    }
}