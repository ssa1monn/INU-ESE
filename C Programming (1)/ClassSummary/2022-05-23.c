#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//p.538 문자열 토큰
//parsing : 단어 단위로 나누는 행위
//token : 나뉜 단어들

#include<string.h>
#if 0
int main() {
	char str[] = "this is Korea, world best";
	//strtok : string tokenizer //문자열을 토큰으로 나누어주는 함수
	char delimeter[] = " ,\t\n";//토큰 사이에 구분할 수 있는 문자들을 나열
								//공백, 콤마, 탭, 줄바꿈...etc
	
	char* tok = 0;

	//strtok함수는 문자열을 단어 단위로 나누고, 각 단어의 첫번째 주소를 반환

	tok = strtok(str, delimeter);//문자열 str을 tokenize 하는데, 구분자는 delimeter
	
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

//542 숫자와 문자 변환
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

//2차원 배열의 문자열
#if 0
int main() {
	char s[3][10] = {
		"hello",
		"world",
		"bye"
	};
	for (int i = 0; i < 3; i++) printf("%s\n", s[i]);
						//2차원 배열로 저장된 문자열에서 s[i]는 i번째 문자열의 시작주소

}
#endif

//527
//문자열 중에서 제일 긴 문자열 출력
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

//546 한영사전의 구현
#if 0
int main() {
	char d[5][2][30] = {
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"languate","언어"},
		{"rain","비"}
	};

	char str[30];
	printf("찾고자 하는 영단어를 입력\n");
	gets(str);
	
	for (int i = 0; i < 5; i++) {
		if (strcmp(str, d[i][0]) == 0) printf("번역 : %s\n", d[i][1]);
	}
}
#endif

//550 hangman game
#if 0
int main() {

}
#endif
//6월 3일까지 과제

//1차기말 범위 : 5월 20일까지


//chap13 구조체
//struct
//새로운 자료형을 만든든 방법

#if 0
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student a;

	//구조체 변수를 만들면서 바로 초기화 하는 방법
	struct student b = { 202201673,"jin",4.13 };

	a.number = 202201673;
	strcpy(a.name, "jin");
	a.grade = 4.13;
}
#endif

#if 0
//2차원 좌표값을 저장하는 데이터형 coord
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

	//좌표를 저장할 수 있는 변수 x를 100개 배열로 만드는 방법
	struct coord x[100];

	//100개의 x배열에 a좌표를 동일하게 작성
	for (int i = 0; i < 100; i++) {
		x[i] = a;
	}
}
#endif

//사람 이름, 나이를 쌍으로 입력 받아 저장, 나이 오름차순으로 출력
//최대 10명
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
	printf("가장 나이가 어린 사람 이름은 %s\n", p[youngest_idx].name);
}
#endif