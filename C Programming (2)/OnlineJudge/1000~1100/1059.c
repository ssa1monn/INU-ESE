// ù° �ٿ� unsigned int (4byte) ������ �Է��� 16������ �ϳ� ���´�. (data)
// �ι�° �ٿ� 32������ int 10 ������ ���·� ������ �ϳ� ���´�. (n)

// data�� �� �� ������Ʈ ���� �����ؼ� n��° bit�� ���� 1�� ����� �����ϴ� �Լ� makeDataOne()�� �ۼ��϶�.
// �ٸ� bit���� �ջ��� �־�� �ȵǸ�, n��° ���� ���� 0�̵� 1�̵� ������ 1�� ����� �����϶�.
// (n = 1�� ��,�� 1��° bit �� ���� ���� ��Ʈ�̴�.)

// (����)
// 0X11111111 = 0b 00010001 00010001 00010001 00010001 �̰�,
// n = 3 �� ��,
// 0b 00010001 00010001 00010001 00010"1"01 = 0X11111115 �� ����

// �Ʒ� �ڵ忡 ����� ���¿� ���߾� makeDataOne() �Լ��� �����϶�.
// ��, main �Լ��� �ǵ��� ���ÿ�.

#include <stdio.h>

int makeDataOne(int _data, int _n);

int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataOne(data, n));

    return 0;
}

int makeDataOne(int _data, int _n) {
    return _data | (1 << (_n - 1));
}