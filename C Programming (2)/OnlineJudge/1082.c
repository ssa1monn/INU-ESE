// ù° �ٿ� unsigned int (4byte) ������ �Է��� 16�������ϳ� ���´�. (data) -- ���� ������
// int 10 ������ ���·� 0���� ���� bit �� ������ �Էµȴ�.(0~32 ������ ��) -- �ٲ� bit�� ����(n�̶�� ����.)
// int 10������ ���·� 0���� ���� bit�� index�� ���ʴ�� �Էµ�. (1~32 ������ ��) -- �ٲ� bit�� index (arr�̶�� ����)

// data�� �� �� n���� bit�� ������ ���̴�.
// ������Ʈ ���� �����ؼ� �ش� ��° ��� bit�� ���� 0���� ����� �����ϴ� �ڵ带 �ۼ��϶�.
// �ٸ� bit���� �ջ��� �־�� �ȵǸ�, �ش� ��° ���� ���� 0�̵� 1�̵� ������ 0���� ����� 16������ ����϶�.
// ( 1��° bit �� ���� ���� ��Ʈ�� �Ѵ�.)
// ��, 16���� �� ���ĺ��� �׻� �빮�ڷ� ����϶�.

// �ٲ� bit �� index (���⼭�� arr�� ��)�� ���� ��ģ�ٸ� 1ȸ�� �ٲٸ� �ȴ�.

// (����)
// 0X11111111 = 0b 00010001 00010001 00010001 00010001 �̰�,
// n = 4 �̰�,
// arr = { 1, 2, 5 , 5 } �� ��,
// 0b 00010001 00010001 00010001 0000 0000 = 0X11111100 �� ����

// �ڵ� �ۼ� ���� : ��������� <stdio.h>�� ����ϰ�, �� ���� �Լ��� ���� �����Ͽ� �ۼ��Ѵ�. , 
// ���ø� ���� �˾Ƽ� �ۼ��ϰ� �Է¿� ���� ��°���� ������ �ȴ�.

#include <stdio.h>

int main(void) {
    unsigned int data;
    int n, temp;
    scanf("%x", &data); 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        data &= ~(1 << temp - 1);
    }
    printf("%X", data);
    return 0;
}