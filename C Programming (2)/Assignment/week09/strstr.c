#include <stdio.h>

char* strstr(char* str1, char* str2) {
    int length = 0;
    for (int i = 0; str2[i] != '\0'; i++) length++;
    for (int j = 0; str1[j] != '\0'; j++) {
        if (str1[j] == str2[0]) {
            for (int k = 0; k < length; k++) {
                if (str1[j + k] != str2[k]) break;
                if (str2[k + 1] == '\0') return str1 + j;
            }
        }
    }
    return NULL;
}

int main(void) {
    char str1[12] = "Hello World";
    char str2[6] = "World";
    printf("%p", strstr(str1, str2));

    return 0;
}