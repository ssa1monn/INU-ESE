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
    char s[20] = {0,};
    char s1[20] = {0,};
    char s2[20] = {0,};
    //배열의 초기화

    int count = 0;

    scanf("%s", s);
    int n = strlen(s);

    for (int i = 0; i < n; i++) // 몇 번째 문자를 건너뛸지 i에 저장, 반복
    {
        for (int m = 0; m < n; m++) // 원본 문자열 불러오기
        {
            if (m == i) // m == i일 경우 건너뛸 문자, continue를 통해 다음 반복으로 넘어감
                continue;
            else if (m > i) 
            // m > i 일 경우 문자를 건너 뛴 이후의 문자들임.
            // s1은 s에서 건너뛴 문자가 있으므로 크기가 1 작음.
            // 따라서 s에서 m번째를 불러온 것은 s1에서는 m-1에 저장이 되어야함
                s1[m - 1] = s[m];
            else
            // m < i 일 경우임
            // 문자를 건너뛰기 전이므로 원본 배열과 복사본 배열의 인덱스가 같음.
                s1[m] = s[m];
        }

        for (int m = 0; m < n; m++)
        // s1의 문자열을 반대로 정렬하여 s2에 저장
                s2[m] = s1[n - 2 - m];

        if (strcmp(s1, s2) == 0)
        // s1과 s2를 비교해서 똑같을 경우 count의 값을 i만큼 증가시킴.
            count = count + i;
    }

    printf("%d", count);

    return 0;
}