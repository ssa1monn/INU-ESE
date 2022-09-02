// 문제 설명
// 양의 정수 (최대 크기 10억)들을 입력받아, 각 자리에 나타나는 숫자들을 분리해서 빈도수 통계를 작성한다.
// (숫자들이 나타나는 위치는 중요하지 않다.)
// 통계를 이용하여, 빈도수가 가장 높은 숫자와 그 빈도 수를 출력 (숫자와 빈도수 사이는 공백으로 분리)하시오.
// 입력은 -999에서 종료된다. (-999는 빈도 수 계산에 포함하지 않는다.)
// 예를 들어 92 13 14 95 11 -999가 입력되면,
// 1이 4번,
// 9가 2번
// 2, 3, 4,5가 각각 1번.
// 따라서 1 4를 출력한다. (출력 끝에는 줄바꿈 표시를 하지 않는다.)
// 단, 가장 많은 빈도수를 가지는 숫자는 단 1개뿐이다.

// 입력
// 92 13 14 95 11 -999

// 출력
// 1 4

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    int input_array[10] = { 0, };
    int frequency = 0;
    int frequency_number = 0;

    char input[100] = { 0 };
    char onlyNum[100] = { 0 };
    int index = 0;

    // 공백을 포함하여 문자열 형태로 숫자 입력받기
    scanf("%[^\n]s", input);

    int n = strlen(input);

    for (int i = 0; i < n; i++)
    {
        if (input[i] == '-' && input[i + 1] == '9' && input[i + 2] == '9' && input[i + 3] == '9')
        {
            input[i - 1] = '\0';
            break;
        }
    }

    n = strlen(input);

    // 공백과 기타 문자를 지워서 새로운 문자열 onlyNum에 저장.
    for (int i = 0; i < n; i++)
    {
        if (input[i] != ' ' && (input[i] >= '0' && input[i] <= '9'))
        {
            onlyNum[index] = input[i];
            index++;
        }
    }

    n = strlen(onlyNum);

    for (int i = 0; i < n; i++)
    {
        int num = onlyNum[i] - '0';
        input_array[num]++;
    }

    frequency = input_array[0];
    frequency_number = 0;

    // 0번째 부터 차례대로 빈도수가 가장 큰 수를 검사하는 로직
    for (int i = 1; i < 9; i++)
    {
        if (frequency < input_array[i]) // 이전 숫자 보다 크면 교체
        {
            frequency = input_array[i];
            frequency_number = i;
        }
    }

    printf("%d %d", frequency_number, frequency);

    return 0;
}
