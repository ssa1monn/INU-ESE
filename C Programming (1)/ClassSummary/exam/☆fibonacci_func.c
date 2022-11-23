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