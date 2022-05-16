#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <conio.h>

int main(void)
{
    char input[100] = { 0 };
    char onlyNum[100] = { 0 };
    int result[2][10] = { 0, };
    int count[10] = { 0, };
    // 위 int형 배열 또한 Visual Studio 상에서는 { 0 } 으로 써도 상관 없음.
    // 하지만 Online Judge 에서는 오류 발생
    int index = 0;
    // 모두 기본을 0 값을 지정해줘서 이후에 NULL을 안써도 될거라 생각. 확인은 안해봄

    char temp;

    // 공백을 포함하여 문자열 형태로 숫자 입력받기
    scanf("%[^\n]s", input);
    // fgets(input, 100, stdin);
    // 6행, 23행 참고, Visual Studio 컴파일러에서는 <conio.h> 헤더파일 내의 fgets 함수 사용 가능
    // Online Judge 에서는 사용 불가. 따라서 scanf를 공백 포함으로 받도록 변경

    int n = strlen(input);
    input[n] = '\0'; // NULL 문자를 통해 문자열 끝부분 지정 (없어도 상관없을듯? 10~13행 참고)

    // -999 를 끝으로 앞에 숫자만 포함하기
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '-' && input[i + 1] == '9' && input[i + 2] == '9' && input[i + 3] == '9')
        {
            input[i - 1] = '\0';
            break;
        }
    }

    n = strlen(input);

    // strlen 을 통해 -999 앞까지의 문자열 길이를 구한 후, 그 뒤는 모두 NULL 처리
    for (int i = n; i < 100; i++)
    {
        input[i] = '\0';
    }

    // 공백과 기타 문자를 지워서 새로운 문자열 onlyNum에 저장. 어차피 양수만 입력받기에 != ' ' 만 써줘도 됨.
    for (int i = 0; i < n; i++)
    {
        if ( input[i] != ' ' && (input[i] >= '0' && input[i] <= '9') )
        {
            onlyNum[index] = input[i];
            index++;
        }
    }
    
    n = strlen(onlyNum);

    // 숫자만 있는 onlyNum 배열을 오름차순으로 숫자 정렬
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (onlyNum[i] > onlyNum[j])
            {
                temp = onlyNum[i];
                onlyNum[i] = onlyNum[j];
                onlyNum[j] = temp;
            }
        }
    }

    // onlyNum 은 char 형 문자열이기 때문에 숫자를 아스키코드 값으로 저장. count 배열은 int 형이므로 정수값으로 변환하는 과정
    // + 각 숫자의 빈도 계산
    for (int i = 0; i < n; i++)
        count[onlyNum[i] - '0']++;

    // result 의 0번째 줄은 모두 문자열 형태로 출력할것이므로 '0' + i 를 통해 숫자를 아스키코드 값으로 저장.
    // 1번째 줄은 빈도를 정수값으로 출력할것이므로 정수형 배열인 count를 복사.
    for (int i = 0; i < 10; i++)
    {
        result[0][i] = '0' + i;
        result[1][i] = count[i];
    }

    // 1번째 줄 빈도값을 기준으로 배열 정렬
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (result[1][i] < result[1][j])
            {
                temp = result[0][i];
                result[0][i] = result[0][j];
                result[0][j] = temp;

                temp = result[1][i];
                result[1][i] = result[1][j];
                result[1][j] = temp;
            }
        }
    }

    // 0번째 줄 숫자는 아스키 코드, 즉 문자 형태로 출력, 1번째 줄 숫자는 빈도값, 정수값으로 출력.
    printf("%c %d", result[0][0], result[1][0]);

    return 0;
}