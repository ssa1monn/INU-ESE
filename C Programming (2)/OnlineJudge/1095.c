// ���ڿ��� ����ִ� Ư�� ������ ������ ������ �Ѵ�.

// main �Լ�����, key ���ڿ�  100�� �̸��� ���ڿ� str�� ���ʷ� �Էµȴ�.
// ���ڿ� str�ȿ� key���� ���� Ƚ���� �����ϴ� �Լ� countKey()�� �ۼ��϶�. 

// main�Լ��� �ǵ� �� ����, �־��� ���ø��� Ȱ���ϵ��� �Ѵ�.
// �ٸ� ��������� �̿��� �� ����. (ǥ�� ���ڿ� �Լ� <string.h> ��� ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countKey(char *str, char key);

int main(void)
{
    char str[100];
    char key;

    scanf("%c", &key);
    scanf("%s", str);

    printf("%d", countKey(str, key));

    return 0;
}

int countKey(char* str, char key) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == key) count++;
    }
    return count;
}