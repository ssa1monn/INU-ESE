// main �Լ� ���� ���� ������ p�� �ʱ�ȭ�Ǿ��ִ�.

// ���� ���ǿ� �´� �Լ� ese()�� �����϶�.
// - ���� ������ p�� ���ڷ� �޴´�.
// - �� ���� ������ �Ű������� [3x50] �������� 2���� �迭�� �������� �Ҵ�ް�(malloc)
// - 50�̸��� ������ ���� ���ڿ� 3���� Ű����κ��� �Է��� �޾�(scanf)
// - �ٽ� ���������͸� �����Ѵ�. 

// main �Լ������� �� �� ���ڿ��� �ֿܼ� ����ϰ�,
// ���� �Ҵ��� �����ϴ� (free) �κ����� �Ǿ��ִ�.

// main �Լ��� �ǵ� �� ������, �־��� ���ø��� Ȱ���϶�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char** ese(char** _p);

int main(void)
{
    char** p = NULL;

    p = ese(p);

    printf("%s\n%s\n%s", *p, *(p + 1), *(p + 2));

    for (int i = 0; i < 3; i++) free(p[i]);
    free(p);

    return 0;
}

char** ese(char** _p) {
    _p = (char**)malloc(sizeof(char*) * 3);
    for (int i = 0; i < 3; i++) {
        _p[i] = (char*)malloc(sizeof(char) * 50);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%s", _p[i]);
    }
    return _p;
}