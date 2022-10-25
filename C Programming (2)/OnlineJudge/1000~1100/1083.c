// 100자 미만의 공백이 없는 문자열이 입력된다.
// 이 문자열에서 '!'(느낌표)의 개수를 출력하는 프로그램을 작성하라.

// 코드 작성 조건 : 헤더파일은 <stdio.h>만 사용하고, 그 외의 함수는 직접 정의하여 작성한다. , 
// 템플릿 없이 알아서 작성하고 입력에 대한 출력결과만 맞으면 된다.

#include <stdio.h>

int main(void) {
    char str[100];
    int count = 0;
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '!') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}