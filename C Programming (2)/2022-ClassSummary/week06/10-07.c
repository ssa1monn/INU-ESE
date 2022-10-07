#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Ư���� ���� define ����
#define PI 3.141592
#define MAX 100

// �Լ��� define ����
#define POWER(x) (x*x)
#define SWAP(x,y,t) (t=x, x=y, y=t)

int main(void) {

    // �Է�
    int n;
    scanf("%d", &n); // 64
    scanf("%x", &n); // 40

    // 0000 0000 0000 0000 0000 0000 0100 0000

    printf("%d", n); // 64
    printf("%x", n); // 40

    char a = 'a'; // 97
    printf("%c", a); // a
    printf("%d", a); // 97

    // ������ 1 bit �� ������ 1�� : OR
    // 0000 0000 0000 0000 0000 0000 0100 0001
    // 1 : 0000 0000 0000 0000 0000 0000 0000 0001
    int result = (n | 0x01);

    // ������ 1 bit �� ������ 0���� : AND + NOT
    // ~1 : 1111 1111 1111 1111 1111 1111 1111 1110
    result = (n & (~0x01));

    return 0;
}