// 문제 설명
// 양의 정수 k를 입력받는다. 1부터 n까지의 합을 s라고 했을 때, s가 k보다 작거나 같은 n들 중에서 최대값을 출력하시오.

// 입력
// 56

// 출력
// 1부터 10까지의 합이 55이므로, k=56 조건에서 10이 최대수가 된다.
// 따라서 10을 출력한다. 
// 10뒤에는 줄바꿈을 출력하지 않는다.

#include <stdio.h>

int main(void)
{
	int k, np = 0, s = 0;
	scanf("%d", &k);

	for (int n = 1;; n++) 
	{
		s += n;
		if (s > k)
			break;
		np++;
	}
	printf("%d", np);
	return 0;
}