// 100�� �̸��� ���� ���� ���ڿ��� �ϳ� �Էµȴ�.
// �� ���ڿ��� �������� ����ϴ� ���α׷��� ������.
// ��, �� ���ڿ����� ���� �빮�ڶ�� �ҹ��ڷ�, �ҹ��ڶ�� �빮�ڷ� �ٲپ� ����϶�.

// (����)
// "IncheonNationalUniversity" �� �ԷµǾ��� ��,
// "YTISREVINuLANOITAnNOEHCNi" ���� ���

// �ڵ� �ۼ� ���� : ��������� <stdio.h>�� ����ϰ�, �� ���� �Լ��� ���� �����Ͽ� �ۼ��Ѵ�. 
// (���ڿ� �Լ� ������� ����!!!)
// ���ø� ���� �˾Ƽ� �ۼ��ϰ� �Է¿� ���� ��°���� ������ �ȴ�.

#include <stdio.h>

int main(void) {
    char str[100];
    int count = 0;
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    for(int j = count - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    return 0;
}