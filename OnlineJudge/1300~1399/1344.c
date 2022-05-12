// 문제 설명
// 양의 정수 n (1 <= n <= 20억)과
// 양의 정수 k (1 <= k <= 9)를 입력받아
// n에 들어있는 k의 개수를 출력하는 프로그램을 작성하시오.

// 입력
// n k
// n과 k는 공백으로 구분된다.

// 출력
// n에 들어있는 k의 개수

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, k;
	int sum = 0;
	int num;
	int count = 0;
	int pow = 1;

	scanf("%d %d", &n, &k);

	num = n;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (n/pow - (n/(pow*10)) * 10 == k)
		{
			sum++;
		}
		pow = pow * 10;
	}
		
	printf("%d", sum);

	return 0;
}