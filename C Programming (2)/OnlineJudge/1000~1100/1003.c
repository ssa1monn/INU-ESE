// unsigned int ������ 10���� ������ �Է��� �־�����.
// ���� ��� 1234567�̶�� ���ڸ� 2������ ��Ÿ�� ���� �Ʒ��� ����.
// 0001 0010 1101 0110 1000 0111
// 2������ ��Ÿ�� ǥ������ 1�� ������ �����ϴ� �Լ� countBinaryOne() �� �ۼ��϶�.

// �Ʒ� �ڵ带 �����ؼ� �ʿ��� �κ��� ä��ÿ�.
// ��, main �Լ��� ���� �ǵ��� �ʴ´�.

#include <stdio.h>

int countBinaryOne(unsigned int _data) {
// �� �κ��� �ۼ��϶� ==========================

    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((_data >> i) & 1) {
            count++;
        }
    }
    return count;

// =============================================
}

int main() {

    unsigned int data;
    scanf("%d", &data);

    printf("%d", countBinaryOne(data));

    return 0;
}