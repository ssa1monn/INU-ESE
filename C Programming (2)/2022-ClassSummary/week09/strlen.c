#include <stdio.h>

int strlen(char* str) {
    for (int i = 0; str[i - 1] != '\0'; i++) if (str[i] == '\0') return i;
}

int strlen1(char* str) {
    char *str1 = str;
    while(*str1 != '\0') str1++;
    return str1 - str;
}

int main(void) {
    char str[10] = "Hello";
    printf("%d", strlen(str));

    return 0;
}