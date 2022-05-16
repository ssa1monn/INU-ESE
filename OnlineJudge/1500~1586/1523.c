// ���� ����
// Palindrome ���ڿ��� �տ������� �о��� ���� �ڿ������� �о��� �� �����ϴٴ� Ư¡�� ���´�. 
// ���� ���, aba, aaa, abba, ���� palindrome ���ڿ��̴�.
// �ִ���� 20�� ���ڿ� s�� �ԷµǾ��� ��, 
// �ε��� i (0 <= i < strlne(s)) ��ġ�� �ִ� �� ���� ���ڸ� �������� ��, 
// palindrome ���ڿ��� �Ǵ� ��� i������ ���� ����Ͻÿ�.
// ���� ���, s = aaaa �� ���, i = 0, 1, 2, 3 �� ������ �����ϹǷ� 0+1+2+3 = 6�� ���,
// s = ababa �� ���, i = 2���� �� ������ �����ϹǷ� 2�� ����Ѵ�.

// �Է�
// aaaa

// ���
// 6

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[20];
    char s1[20];
    char s2[20];

    int count = 0;

    scanf("%s", s);
    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < n; m++)
        {
            if (m == i)
            {
                continue;
            }
            else if (m > i)
            {
                s1[m - 1] = s[m];
            }
            else
            {
                s1[m] = s[m];
            }
        }
        s1[n-1] = '\0';

        for (int m = 0; m < n; m++)
        {
                s2[m] = s1[n - 2 - m];
        }
        s2[n-1] = '\0';

        if (strcmp(s1, s2) == 0)
            count = count + i;
    }

    printf("%d", count);

    return 0;
}