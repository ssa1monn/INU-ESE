// 문제 설명
// 정수 입력 2개에 대해
// 첫 번째 숫자를 두 번째 숫자로 나누었으면,
// 나머지가 0이면 ok를 출력,
// 아니면 nok를 출력.
// (주의!! 출력은 모두 소문자, 끝에 줄바꿈 표시하지 마세요)

// 입력
// 10 5

// 출력
// ok

#include <stdio.h>
#include <math.h>

int main(void)
{
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	if (val1 % val2 == 0)
		printf("ok");
	else
		printf("nok");
	return 0;
}