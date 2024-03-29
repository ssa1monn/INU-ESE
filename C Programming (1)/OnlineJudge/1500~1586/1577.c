// 문제 설명
// #include <stdio.h>
// 	    함수 myfibo는
// 	    0 또는 양의 정수 int argument 1개를 입력으로 받아,
// 	    해당 위치의 fibonacci 숫자를 반환.
// 	    Fibonacci 수열은 앞에 위치한 두 수의 합이 현재 값이 된다. 
// 	    0 번째 : 0
// 	    1 번째 : 1
// 	    2 번째 : 1
// 	    3 번째 : 2
// 	    4 번째 : 3
// -------------  아래로는 고치지 마세요 ----------
// int main(void) {
// 	    int a;
// 	    scanf("%d", &a);
// 	    printf("%d", myfibo(a))
// 	    return 0;
// }

// 입력

// 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 myfibo는

	0 또는 양의 정수 int argument 1개를 입력으로 받아,
	해당 위치의 fibonacci 숫자를 반환.

	Fibonacci 수열은 앞에 위치한 두 수의 합이 현재 값이 된다.

	0 번째 : 0
	1 번째 : 1
	2 번째 : 1
	3 번째 : 2
	4 번째 : 3


*/

int myfibo(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;

	return myfibo(n-2) + myfibo(n - 1);
}

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", myfibo(a));

	return 0;
}