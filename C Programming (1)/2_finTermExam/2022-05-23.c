#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//p.538 ���ڿ� ��ū
//parsing : �ܾ� ������ ������ ����
//token : ���� �ܾ��

#include<string.h>
#if 0
int main() {
	char str[] = "this is Korea, world best";
	//strtok : string tokenizer //���ڿ��� ��ū���� �������ִ� �Լ�
	char delimeter[] = " ,\t\n";//��ū ���̿� ������ �� �ִ� ���ڵ��� ����
								//����, �޸�, ��, �ٹٲ�...etc
	
	char* tok = 0;

	//strtok�Լ��� ���ڿ��� �ܾ� ������ ������, �� �ܾ��� ù��° �ּҸ� ��ȯ

	tok = strtok(str, delimeter);//���ڿ� str�� tokenize �ϴµ�, �����ڴ� delimeter
	
	//printf("%s\n", tok);

	while (1) {
		if (tok == 0) {
			break;
		}
		printf("%s\n", tok);
		tok = strtok(0, delimeter);
	}
}
#endif

//542 ���ڿ� ���� ��ȯ
//atoi : ascii to integer
//atof : ascii to float

//ex) " I have 10 apples"
#include<stdlib.h>
#if 0
int main() {
	char s1[] = "100";
	int v1 = atoi(s1);
	printf("%d\n", v1);
}
#endif

//2���� �迭�� ���ڿ�
#if 0
int main() {
	char s[3][10] = {
		"hello",
		"world",
		"bye"
	};
	for (int i = 0; i < 3; i++) printf("%s\n", s[i]);
						//2���� �迭�� ����� ���ڿ����� s[i]�� i��° ���ڿ��� �����ּ�

}
#endif

//527
//���ڿ� �߿��� ���� �� ���ڿ� ���
#if 0
int main() {
	char str[4][11];
	for (int i = 0; i < 4; i++) gets(str[i]);
	int max = 0;
	for (int i = 0; i < 3; i++) {
		max = (strlen(str[max]) > strlen(str[i + 1])) ? max : i + 1;
	}
	printf("%s\n", str[max]);
}
#endif

//546 �ѿ������� ����
#if 0
int main() {
	char d[5][2][30] = {
		{"book","å"},
		{"boy","�ҳ�"},
		{"computer","��ǻ��"},
		{"languate","���"},
		{"rain","��"}
	};

	char str[30];
	printf("ã���� �ϴ� ���ܾ �Է�\n");
	gets(str);
	
	for (int i = 0; i < 5; i++) {
		if (strcmp(str, d[i][0]) == 0) printf("���� : %s\n", d[i][1]);
	}
}
#endif

//550 hangman game
#if 0
int main() {

}
#endif
//6�� 3�ϱ��� ����

//1���⸻ ���� : 5�� 20�ϱ���


//chap13 ����ü
//struct
//���ο� �ڷ����� ����� ���

#if 0
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student a;

	//����ü ������ ����鼭 �ٷ� �ʱ�ȭ �ϴ� ���
	struct student b = { 202201673,"jin",4.13 };

	a.number = 202201673;
	strcpy(a.name, "jin");
	a.grade = 4.13;
}
#endif

#if 0
//2���� ��ǥ���� �����ϴ� �������� coord
struct coord {
	int x;
	int y;
};
int main() {
	struct coord a;
	atruct coord b;
	
	a.x = 10;
	a.y = 10;

	b.x = 20;
	b.y = 20;

	//��ǥ�� ������ �� �ִ� ���� x�� 100�� �迭�� ����� ���
	struct coord x[100];

	//100���� x�迭�� a��ǥ�� �����ϰ� �ۼ�
	for (int i = 0; i < 100; i++) {
		x[i] = a;
	}
}
#endif

//��� �̸�, ���̸� ������ �Է� �޾� ����, ���� ������������ ���
//�ִ� 10��
#if 1
struct profile {
	char name[];
	int age[];
};
int main() {
	struct profile p[10];
	for (int i = 0; i < 10; i++) {
		gets(p[i].name);
		if (strcmp("end", p[i].name) == 0) break;
		scanf("%d", &p[i].age);
	}
	int youngest_idx = -1;
	int youngest_age = 10000;
	for (int i = 0; i < 10; i++) {
		if (p[i].age < youngest_age) {
			youngest_age = p[i].age;
			youngest_idx = i;
		}
	}
	printf("���� ���̰� � ��� �̸��� %s\n", p[youngest_idx].name);
}
#endif