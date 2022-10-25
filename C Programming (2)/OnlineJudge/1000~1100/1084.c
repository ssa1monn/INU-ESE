// 100자 미만의 공백 없는 문자열이 하나 입력된다.
// 이 문자열을 역순으로 출력하는 프로그램을 만들어라.
// 단, 이 문자열에서 영문 대문자라면 소문자로, 소문자라면 대문자로 바꾸어 출력하라.

// (예시)
// "IncheonNationalUniversity" 가 입력되었을 때,
// "YTISREVINuLANOITAnNOEHCNi" 으로 출력

// 코드 작성 조건 : 헤더파일은 <stdio.h>만 사용하고, 그 외의 함수는 직접 정의하여 작성한다. 
// (문자열 함수 사용하지 말것!!!)
// 템플릿 없이 알아서 작성하고 입력에 대한 출력결과만 맞으면 된다.

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