// ���� ����
// �ִ���� 30�� ���ڿ� s�� �Էµȴ�.
// s�ȿ� ���� 2 �̻��� palindrome�� ��� �� �� ����ִ��� ����Ͻÿ�.
// ���� ���, �Է��� aaa �̸�,
// s[0]�� s[1]���� �̷���� aa�� palindrome,
// s[1]�� s[2]�� �̷���� aa�� palindrome,  (s[0]�� s[1]���� �̷���� aa�ʹ� ������ ������ �����Ѵ�.)
// s��ü�� �̷���� aaa�� palindrome 
// ����, 3�� ���

// �Է�
// aaa

// ���
// 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int count = 0;
    char c[31] = {0};

    scanf("%s", c);

    int n = strlen(c);

    for(int i = 1; i < n; i++)  
    {
        for(int j = 0; j < n - i; j++)
        {
            char temp[31] = {0};
            char rev[31] = {0};

            for(int k = j; k <= j + i; k++)
                temp[k - j] = c[k];

            for (int m = 0; m <= i; m++)
                rev[m] =  temp[i - m];

            if(strcmp(temp, rev) == 0)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}