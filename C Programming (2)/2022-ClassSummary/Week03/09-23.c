#include <stdio.h>
#include <string.h>
#include <assert.h>

char* MyReverse(char* p) {
	int ta, tb;
	unsigned char c;

    for (int i = 0; i < 20; i++) {
        if (p[i] == '\0') {
            ta = i - 1;
            break;
        }
    }
     
    tb = 0;

    while (ta > tb) {
        c = p[ta];
        p[ta] = p[tb];
        p[tb] = c;
        ta--;
        tb++;
    }

	return p;
}

int main() {

	unsigned char c, array[20];

	assert(!strcmp(MyReverse(strcpy(array, "I am a boy")), "yob a ma I"));
	assert(!strcmp(MyReverse(strcpy(array, "I am a girl")), "lrig a ma I"));
	assert(!strcmp(MyReverse(strcpy(array, "ABCdefgHIJ")), "JIHgfedCBA"));

	gets(array); // scanf("%s", array);
	printf("Before : %s\n", array);
	printf("After : %s\n", MyReverse(array));

}
