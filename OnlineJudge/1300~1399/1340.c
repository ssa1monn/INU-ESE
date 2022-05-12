// 문제 설명
// 숫자를 1개 입력받아,
// 양수이면서 짝수이면 positive even,
// 양수이면서 홀수이면 positive odd,
// 음수이면서 짝수이면 negative even,
// 음수이면서 홀수이면 negative odd,
// 0이면 zero라고 출력하는 프로그램을 작성하시오.

// 입력
// m
// 입력되는 정수, -20억 <= m <= 20억

// 출력
// string
// string은 positive even, positive odd, negative even, negative odd, zero 중 하나
// string 뒤에 줄바꿈이나 공백문자없음

#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	switch (num > 0)
	{
		case 0:
			if (num == 0)
				printf("zero");
			else if (num % 2 != 0)
				printf("negative odd");
			else
				printf("negative even");
			break;
		case 1:
			if (num % 2 != 0)
				printf("positive odd");
			else
				printf("positive even");
			break;
	}

	return 0;
}