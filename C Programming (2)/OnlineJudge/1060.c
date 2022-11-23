// ù° �ٿ� unsigned int (4byte) ������ �Է��� 16������ �ϳ� ���´�. (data)
// �ι�° �ٿ� 32������ int 10 ������ ���·� ������ �ϳ� ���´�. (n)

// data�� �� �� ������Ʈ ���� �����ؼ� n��° bit�� ���� 0���� ����� �����ϴ� �Լ� makeDataZero()�� �ۼ��϶�.
// �ٸ� bit���� �ջ��� �־�� �ȵǸ�, n��° ���� ���� 0�̵� 1�̵� ������ 0���� ����� �����϶�.
// (n = 1�� ��,�� 1��° bit �� ���� ���� ��Ʈ�̴�.)

// (����)
// 0X11111111 = 0b 00010001 00010001 00010001 00010001 �̰�,
// n = 1 �� ��,
// 0b 00010001 00010001 00010001 0001000"0" = 0X11111110 �� ����

// �Ʒ� �ڵ忡 ����� ���¿� ���߾� makeDataZero() �Լ��� �����϶�.
// ��, main �Լ��� �ǵ��� ���ÿ�.

#include <stdio.h>

int makeDataZero(int _data, int _n);

int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataZero(data, n));

    return 0;
}

int makeDataZero(int _data, int _n) {
    return _data & ~(1 << (_n - 1));
}