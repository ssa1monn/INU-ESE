// �빮�ڸ� �ڷ� ���� �����ϴ� ���ڿ� �Լ��� ������� �Ѵ�.
// arr �迭�� 100�� �̸��� ���ڿ��� �Էµǰ�,
// �� ���ڿ� �� ���� �빮�ڸ� ������� �ڷ� ���� result �����Ͽ� �����ϰ��� �Ѵ�.
// �Ʒ� �ڵ带 �����Ͽ� esestrcpy() �Լ��� �ۼ��Ͻÿ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esestrcpy(char arr[100], char result[100]);

int main(void)
{
    char arr[100];
    char result[100];

    scanf("%s", arr);

    esestrcpy(arr, result);

    printf("%s", result); 
    return 0;
}

void esestrcpy(char arr[100], char result[100]) {
    int i = 0, j = 0;

    while (arr[i] != '\0') {
        if (arr[i] < 'A' || arr[i] > 'Z') {
            result[j] = arr[i];
            j++;
        }
        i++;
    }

    i = 0;

    while (arr[i] != '\0') {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            result[j] = arr[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';
}