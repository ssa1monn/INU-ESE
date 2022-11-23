// unsigned int Ÿ���� ���� data�� �ִ�.
// �� ���� 2������ ���� ���� �ð������� ǥ���ϴ� �Լ� makeDot()�� �����ϰ��� �Ѵ�.

// ���� ���,  data�� ���� 10������ 100�̶�� ���ڰ� ���Դٸ�, �̰Ϳ� �ش��ϴ� 2���� ������ �迭�� ������ �� �̰��� ���ڿ��� ����ϴ� ���̴�.
// ó�� ������ ������ ����, 

// 100�� �Է����� ��, �̰��� 2���� ǥ���� 0000 0000 0000 0000 0000 0000 0110 0100 �� �ȴ�. 
// (32��Ʈ�� ǥ��, �պκ��� ��� 0 �̴�.)

// �� 32���� ��Ʈ ���� char������ binary �迭�� ġȯ�Ͽ� �����ϸ� �� ���̴�.
// �� ��, 2���� �� �߿��� 0�� '-'(������), 1�� '*'(�����͸�ũ)���� �ٲپ�, �迭�� ���������� �����ϵ��� �Ѵ�.

// main�Լ������� ������ binary �迭 �������� NULL�� �߰��Ͽ� ���ڿ��� ����ϴ� �����̴�.
// ���� ���� ����� ����ϸ� -------------------------**--*-- �� ������ �ȴ�.

// main�Լ��� �ǵ� �� ����, �־��� ���ø��� Ȱ���ϵ��� �Ѵ�.
// �ٸ� ��������� �̿��� �� ����. (ǥ�� ���ڿ� �Լ� <string.h> ��� ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeDot(unsigned int data, char* _binary);

int main(void)
{
    unsigned int data;
    char binary[33];
    scanf("%u", &data);

    makeDot(data, binary);
    binary[32] = NULL;

    printf("%s", binary);
    return 0;
}

void makeDot(unsigned int data, char* _binary) {
    for(int i = 31; i >= 0; i--) {
        if(data % 2 == 0) {
            _binary[i] = '-';
        } else {
            _binary[i] = '*';
        }
        data /= 2;
    }
}