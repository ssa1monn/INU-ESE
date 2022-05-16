// 문제 설명
// Palindrome 문자열은 앞에서부터 읽었을 때와 뒤에서부터 읽었을 때 동일하다는 특징을 갖는다. 
// 예를 들어, aba, aaa, abba, 등은 palindrome 문자열이다.
// 최대길이 20인 문자열 s가 입력되었을 때, 
// 인덱스 i (0 <= i < strlne(s)) 위치에 있는 한 개의 문자를 제거했을 때, 
// palindrome 문자열이 되는 모든 i값들의 합을 출력하시오.
// 예를 들어, s = aaaa 인 경우, i = 0, 1, 2, 3 이 조건을 만족하므로 0+1+2+3 = 6을 출력,
// s = ababa 인 경우, i = 2만이 이 조건을 만족하므로 2를 출력한다.

// 입력
// aaaa

// 출력
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