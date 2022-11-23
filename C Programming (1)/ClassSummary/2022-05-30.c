#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//구조체
//struct


#if 0
//576 구조체와 포인터

struct point {
	int x;
	int y;
};

//좌표를 초기화 하는 함수
void initPoint(struct point* v) {

	//구조체 포인터의 경우 
	//member access를 위해서 (->) 사용
	v->x = 20;
	v->y = 30;
}

int main() {
	struct point w;
	
	initPoint(&w);

	printf()
}
#endif

#if 0
//공용체 union
//for memory save

union info {
	char c;
	int a;
};
//둘중 하나만 사용가능
int main() {
	union info k;
	k.c = 'y';
	k.a = 30;
	//->k의 값은 30 만으로 존제
}
#endif

#if 0
//열거형
//enumerate
//쭉 나열하다
enum days { SUN,MON,TUE,WED,THU,FRI,SAT };
int main() {
	enum days d;
	d = MON;
	printf("%d", d);
}
#endif

#if 0
enum boolean { false,true };
#endif

#if 0
//typedef
typedef int func;
int main() {
	int k = 10;
	func w;
	w = k;
}

typedef struct {
	int x;
	int y;
}POINT;
#endif

//chap 15 스트림과 파일 입출력 -> 파일

#if 0
int main() {
	FILE* fp;									//파일 포인터

	//fp = fopen("test.txt", "wt");				//파일, write text mode
	//fputs("hello this is file", fp);

	char str[100];
	fp = fopen("test.txt", "wt");
	//p.669
	fgets(str, 99, fp);

	fclose(fp);
}
#endif

#if 0
int main() {
	//Binary file
	FILE* fp;
	fp = fopen("test.bin", "wb");
	//p.675
	fwrite(&data, sizeof(int), 1, fp);
	fclose(fp);
}
#endif

#if 0
int main() {
	//Binary file
	int data = 9999;
	FILE* fp;
	fp = fopen("test.bin", "rb");
	//p.675
	fread(&data, sizeof(int), 1, fp);
	fclose(fp);
}
#endif

//chap 17 동적 메모리
//static memory <-> dynamic memory
#if 0
#include<stdlib.h>
int* giveMeYourData(void) {
	//memory allocation
	int* p = (int*)malloc(sizeof(int));
	*p = 20;
	return p;
}
int main() {
	int* data = giveMeYourData();
	printf("%d", *data);
	free(data);
	//free를 안해주면 메모리 누수현상
}
#endif

#if 1
int main() {
	int num_data = 0;
	scanf("%d", &num_data);
	int* data;
	data = (int*)malloc(sizeof(int) * num_data);

	data[55] = 123;

	free(data);
}
#endif