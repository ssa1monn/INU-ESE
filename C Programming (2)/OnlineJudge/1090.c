// 50개 미만의 문자를 저장할 수 있는 문자열text에 scanf로 임의의 문자열을 입력 받는다. 

// 이 문자열에 “and”라는 단어가 포함되어 있으면(앞뒤 공백 없어도 됨 그냥 “and”가 존재하는 경우) “and”대신 ‘&’ 로 표현하고, 
// 두 글자가 줄어든 만큼 문장 전체 길이도 그에 맞추어 줄어드는 함수 SWAP을 구현하라. 
// “and”가 나올 때 마다 모두 바꾸어 주어야 함.

// 아래 코드에 선언된 형태에 맞추어 SWAP() 함수를 구현하라.
// 단, main 함수는 건들지 마시오. 
// 다른 헤더파일 사용 할 수 없음, 추가로 필요한 함수가 있으면 직접 구현해서 사용할 것. (문자열 함수 사용 금지란 뜻)

#include <stdio.h> 

void SWAP(char* p); 

int main() { 
     char text[50]; 
     scanf("%s", text);
     SWAP(text); 
     printf("%s", text); 
     return 0;
}

void SWAP(char* p) {
    for(int i = 0; p[i] != '\0'; i++) {
        if(p[i] == 'a' && p[i+1] == 'n' && p[i+2] == 'd') {
            p[i] = '&';
            for(int j = i + 1; p[j] != '\0'; j++) {
                p[j] = p[j+2];
            }
        }
    }
}