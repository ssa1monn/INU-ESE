// ���ڿ� str�ȿ� ���ڿ� key�� ���ԵǾ����� Ȯ���ϴ� �Լ� isKeyIncluded()�� �ۼ��ϰ��� �Ѵ�.

// main �Լ�����,100�� �̸��� ���ڿ� str��  10�� �̸��� ���ڿ� key �� ���ʷ� �Էµȴ�.
// ���ڿ� str�ȿ� key ���� �ѹ��̶� ��������� 1�� �����ϰ�, ������ 0�� �����ϴ� �Լ� isKeyIncluded()�� �ۼ��϶�. 

// main�Լ��� �ǵ� �� ����, �־��� ���ø��� Ȱ���ϵ��� �Ѵ�.
// �ٸ� ��������� �̿��� �� ����. (ǥ�� ���ڿ� �Լ� <string.h> ��� ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isKeyIncluded(char* str, char* key);

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));

    return 0;
}

int isKeyIncluded(char* str, char* key) {
    int i, j;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == key[0]) {
            for(j = 1; key[j] != '\0'; j++) {
                if(str[i + j] != key[j]) break;
            }
            if(key[j] == '\0') return 1;
        }
    }
    return 0;
}