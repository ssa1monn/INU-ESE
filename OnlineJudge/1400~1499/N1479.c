// 문제 설명
// 최대길이 30인 문자열 s가 입력된다.
// s안에 길이 2 이상인 palindrome이 모두 몇 개 들어있는지 출력하시오.
// 예를 들어, 입력이 aaa 이면,
// s[0]와 s[1]으로 이루어진 aa가 palindrome,
// s[1]과 s[2]로 이루어진 aa가 palindrome,  (s[0]와 s[1]으로 이루어진 aa와는 별개의 것으로 간주한다.)
// s전체로 이루어진 aaa가 palindrome 
// 따라서, 3을 출력

// 입력
// aaa

// 출력
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