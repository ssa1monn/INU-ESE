// ���� ����
// #include <stdio.h>
// 	    �Լ� myfibo��
// 	    0 �Ǵ� ���� ���� int argument 1���� �Է����� �޾�,
// 	    �ش� ��ġ�� fibonacci ���ڸ� ��ȯ.
// 	    Fibonacci ������ �տ� ��ġ�� �� ���� ���� ���� ���� �ȴ�. 
// 	    0 ��° : 0
// 	    1 ��° : 1
// 	    2 ��° : 1
// 	    3 ��° : 2
// 	    4 ��° : 3
// -------------  �Ʒ��δ� ��ġ�� ������ ----------
// int main(void) {
// 	    int a;
// 	    scanf("%d", &a);
// 	    printf("%d", myfibo(a))
// 	    return 0;
// }

// �Է�

// ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� myfibo��

	0 �Ǵ� ���� ���� int argument 1���� �Է����� �޾�,
	�ش� ��ġ�� fibonacci ���ڸ� ��ȯ.

	Fibonacci ������ �տ� ��ġ�� �� ���� ���� ���� ���� �ȴ�.

	0 ��° : 0
	1 ��° : 1
	2 ��° : 1
	3 ��° : 2
	4 ��° : 3


*/

int myfibo(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;

	return myfibo(n-2) + myfibo(n - 1);
}

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", myfibo(a));

	return 0;
}