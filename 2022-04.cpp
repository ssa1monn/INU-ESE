#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#if 0
int main(void)
{
	int temp, arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2 - i; j++)
		{
			if (abs(arr[j]) > abs(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	printf("%d %d", abs(arr[2]) - abs(arr[1]), abs(arr[1]) - abs(arr[0]));
	return 0;
}
#endif


#if 0
int main(void)
{
	const char* h = "hello";

	char S[10];
	scanf("%s", S);
	int n = strlen(S);

	char H1[15];
	char H2[15];

	for (int i = 0; i < n / 2; i++)
		H1[i] = S[i];

	H1[n / 2] = '\0';

	for (int m = n / 2; m < n; m++)
		H2[m - n / 2] = S[m];

	H2[n] = '\0';

	strcat(H1, h);
	strcat(H1, H2);
	H1[n + 5] = '\0';
	printf("%s", H1);

	return 0;
}
#endif

#if 0
int main(void)
{
	int a[5], b[5];
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2], &a[3], &b[3], &a[4], &b[4]);

	int amax = a[0];
	int amin = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > amax) amax = a[i];
		if (a[i] < amin) amin = a[i];
	}

	int bmax = b[0];
	int bmin = b[0];
	for (int n = 0; n < 5; n++)
	{
		if (b[n] > bmax) bmax = b[n];
		if (b[n] < bmin) bmin = b[n];
	}

	if ((amax - amin) > (bmax - bmin))
		printf("%d", amax - amin);
	else
		printf("%d", bmax - bmin);

	return 0;
}
#endif

#if 0
int main(void)
{
	int a;
	scanf("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	}

	return 0;
}

#endif

#if 0
#include <stdio.h>

int main(void)
{
	float a = 12345678.12345;
	printf("%10.2f", a);

	return 0;
}
#endif

// 8진법 "%o", 16진법 "%x", 0붙혀서 "%#o", "%#x"
// printf 내에서 % 출력하려면 %%

//10진수 - 2진수 출력하기
#if 0
int main(void)
{
	unsigned int num;
	printf("10진수: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("2진수: ");

	for (int i = 0; i <= 7; i++)
	{
		if ((num & mask) == 0)
			printf("0");
		else
			printf("1");
		mask = mask >> 1;
	}
	return 0;
}
#endif

//4개 문자 비트 연산으로 16진수로 출력
#if 0
int main(void)
{
	char a, b, c, d;
	printf("1 :"); scanf("%c", &a); getchar();
	printf("2 :"); scanf("%c", &b); getchar();
	printf("3 :"); scanf("%c", &c); getchar();
	printf("4 :"); scanf("%c", &d); getchar();
	(unsigned)a; (unsigned)b; (unsigned)c; (unsigned)b;
	printf("%u %u %u %u\n", a, b, c, d);

	unsigned int s0 = 0 << 31;
	unsigned int sa = 0 << 7;
	unsigned int sb = 0 << 7;
	unsigned int sc = 0 << 7;
	unsigned int sd = 0 << 7;

	for (int i = 0; i <= 31; i++)
	{
		if (i <= 7)
		{
			sa = sa | a;
			sa >> 1;
		}
		else if (i <= 15)
		{
			sb = sb | b;
			sb >> 1;
		}
		else if (i <= 23)
		{
			sc = sc | c;
			sc >> 1;
		}
		else if (i <= 31)
		{
			sd = sd | d;
			sd >> 1;
		}
	}

	printf("%x%x%x%x", sd, sc, sb, sa);

	return 0;
}
#endif

//지구 반지름 계산
#if 0
int main(void)
{
	double s, a, r; // s 걸어간 거리 a 중심각도 r 반지름
	scanf("%lf %lf", &s, &a);

	r = s / (2 * 3.14 * (a / 360));

	printf("%lf", r);
	return 0;
}
#endif

//이차 방정식 풀기
#if 0
int main(void)
{
	double a, b, c, dis;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("%lf", -c / b);
	else
	{
		dis = b * b - 4 * a * c;
		if (dis >= 0)
		{
			printf("%lf\n", (-b + sqrt(dis)) / 2 * a);
			printf("%lf", (-b - sqrt(dis)) / 2 * a);
		}
		else
			printf("실근 없음");
	}
	return 0;
}
#endif

//최대공약수 찾기
#if 0
int main(void)
{
	int x, y, r;
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("%d", x);

	return 0;
}
#endif

//반감기
#if 0
int main(void)
{
	double halflife, initial, current;
	int years = 0;

	scanf("%lf", &halflife);

	initial = 100;
	current = initial;
	while (current > initial / 10)
	{
		years += halflife;
		current = current / 2;
		printf("%d년 후 : %lf\n", years, current);
	}
	printf("걸린 시간 : %d", years);

	return 0;
}
#endif

//숫자 추측
#if 0
int main(void)
{
	int guess, answer;
	answer = 59;
	int tries = 0;
	do
	{
		printf("정답 추축: ");
		scanf("%d", &guess);
		tries++;

		if (guess < answer)
			printf("up! \n");
		else if (guess > answer)
			printf("down! \n");
	} while (guess != answer);
	printf("정답: %d", answer);
}
#endif

//팩토리얼
#if 0
int main(void)
{
	int n;
	int fac = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		fac = fac * i;

	printf("%d! = %d", n, fac);

	return 0;
}
#endif

//직각삼각형 출력
#if 0
int main(void)
{
	for (int a = 1; a <= 100; a++)
		for (int b = 1; b <= 100; b++)
			for (int c = 1; c <= 100; c++)
				if (a * a + b * b == c * c)
					printf("%d %d %d\n", a, b, c);
	return 0;
}
#endif

//복리이자
#if 0
int main(void)
{
	double rate = 0.07;
	double investment = 10000000;
	double total = investment;
	int years = 10;
	int i;

	for (i = 1; i <= years; i++)
	{
		total = total * (1 + rate);
		printf("%d번째 복리 %10.1f \n", i, total);
	}

	return 0;
}
#endif

//파이값 구하기
#if 0
int main(void)
{
	int loop_count;
	double divisor, divident, sum;

	divisor = 1;
	divident = 4;
	sum = 0;
	loop_count = 1000;

	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1 * divident;
		divisor = divisor + 2;
		loop_count--;
	}
	printf("%lf", sum);
	return 0;
}
#endif

/*
*   조합 nCr = n! / (n-r)!r!
*/

//0~100까지 소수 출력
# if 0
int main(void) {

	int i;

	for (i = 2; i <= 100; i++)
	{
		int flag = 1;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ", i);
		}

	}

	return 0;
}
#endif

//소수인지 판단하는 함수
#if 0
int is_prime(int input)
{
	int i;
	for (i = 2; i < input; i++)
	{
		if (input % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
#endif

#if 0
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
#endif

