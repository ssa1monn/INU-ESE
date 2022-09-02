// 문제 설명
// 세 개의 숫자를 입력받아 가장 큰 수와 중간 숫자 간의 차이, 중간 숫자와 제일 작은 숫자간의 차이를 출력하는 프로그램을 작성하시오.

// 입력
// -10 10 5 (A B C,  -INT_MAX <= A, B, C <= INT_MAX)

// 출력
// 5 15 (가장 큰수와 중간수의 차이, 5(=10-5), 중간 수와 가장 작은 수의 차이 15 (= 5 - (-10))

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num2 > num3)
		printf("%d %d", num1 - num2, num2 - num3 );
	else if (num1 > num3 && num3 > num2)
		printf("%d %d", num1 - num3, num3 - num2);
	else if (num2 > num1 && num1 > num3)
		printf("%d %d", num2 - num1, num1 - num3);
	else if (num2 > num3 && num3 > num1)
		printf("%d %d", num2 - num3, num3 - num1);
	else if (num3 > num1 && num1 > num2)
		printf("%d %d", num3 - num1, num1 - num2);
	else if (num3 > num2 && num2 > num1)
		printf("%d %d", num3 - num2, num2 - num1);

	return 0;
}