#include <stdio.h>

int main(void)
{
    int sum = 0;
    // variable to store the result

    for(int i = 1; i <= 100; i++)
        if(i % 3 == 0)
            sum += i;

    printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);

    return 0;
}