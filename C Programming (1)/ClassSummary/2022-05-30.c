#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ü
//struct


#if 0
//576 ����ü�� ������

struct point {
	int x;
	int y;
};

//��ǥ�� �ʱ�ȭ �ϴ� �Լ�
void initPoint(struct point* v) {

	//����ü �������� ��� 
	//member access�� ���ؼ� (->) ���
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
//����ü union
//for memory save

union info {
	char c;
	int a;
};
//���� �ϳ��� ��밡��
int main() {
	union info k;
	k.c = 'y';
	k.a = 30;
	//->k�� ���� 30 ������ ����
}
#endif

#if 0
//������
//enumerate
//�� �����ϴ�
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

//chap 15 ��Ʈ���� ���� ����� -> ����

#if 0
int main() {
	FILE* fp;									//���� ������

	//fp = fopen("test.txt", "wt");				//����, write text mode
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

//chap 17 ���� �޸�
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
	//free�� �����ָ� �޸� ��������
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