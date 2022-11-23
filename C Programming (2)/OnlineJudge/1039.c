// unsigned char ������ ���� data�� �ϳ� �ִ�.
// 8bit �� ���� 4bit�� �Ʒ��� ���� ������� �� ���ĺ��� �ǹ��Ѵٰ� �����غ���.

// bit	    0 	1 
// 4��°	E	I
// 3��°	S	N
// 2��°	T 	F
// 1��°	J   P 

// [����] �������� 71�̶�� ���ڰ� ���Դٰ� �������� ��,
// �̸� unsigned char���·� �Ʒ��� ���� ǥ���ȴ�.
// 0	1	0	0	0	1	1	1�̶�, ���� 4bit�� �����ϰ� ���� 4bit�� ���ؼ��� �����Ѵ�.
// 4��° bit���� ���ʷ�, E N F P�� �ǹ��Ѵ�.

// �̿� ���� ������� ���ڰ� �ϳ� ������ ��,
// ���� 4bit�� ���ؼ��� ����� �� ����� MBTI �˻� ����� ���ĺ� �빮�ڷ� ���� ���� ����ϴ� �Լ� printMBTI() �� ���¿� �°� �ۼ��϶�.

#include <stdio.h>

void printMBTI(unsigned char _data) {
    if (_data & 8) printf("I");
    else printf("E");
    if (_data & 4) printf("N");
    else printf("S");
    if (_data & 2) printf("F");
    else printf("T");
    if (_data & 1) printf("P");
    else printf("J");
}

int main()
{
    int input;
    unsigned char data;

    scanf("%d", &input);
    data = (unsigned char)input;

    printMBTI(data);

    return 0;
}