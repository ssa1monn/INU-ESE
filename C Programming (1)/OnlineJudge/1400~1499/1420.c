// 문제 설명
// 아래 프로그램에서 함수 func 는 인수로 양의정수 1개를 입력받아, 1부터 그 정수까지의 합을 반환해야 한다.
// func를 완성한 후, 아래 프로그램을 '복붙' 하여 실행시키시오.
// --------------
// #include <stdio.h>
// int func(int a)
// {
//     이 안을 채워 넣으시오
// }
// void main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d", func(a) * func(a));
//     return;
// }

// 입력
// 임의의 입력

// 출력
// 적당한 출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int func(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", func(a) * func(a));
	return 0;
}