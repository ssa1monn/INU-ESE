#include <stdio.h>

int main(void)
{
	char a, b, c, d;
	printf("1 : "); scanf("%c", &a); getchar();
	printf("2 : "); scanf("%c", &b); getchar();
	printf("3 : "); scanf("%c", &c); getchar();
	printf("4 : "); scanf("%c", &d); getchar();
	(unsigned)a; (unsigned)b; (unsigned)c; (unsigned)b;
	printf("%u %u %u %u\n", a, b, c, d);

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

	printf("%x %x %x %x", sd, sc, sb, sa);

	return 0;
}