#include <stdio.h>

int main(void) {

	int x, digit;
	printf("정수를 입력하시오: " );
	scanf("%d", &x);

	do {
		digit = x % 10;
		x /= 10;
		printf("%d", digit);
	}while(x != 0);

	return 0;
}