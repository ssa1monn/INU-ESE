#include <stdio.h>

void strcat(char* str1, char* str2) {
    int length = 0;
    for (int i = 0; str1[i] != '\0'; i++) length++;
    for (int j = 0; str2[j] != '\0'; j++) {
        str1[length + j] = str2[j];
        if (str2[j + 1] == '\0') {
            str1[length + j + 1] = '\0';
            break;
        }
    }
}

int main(void) {
    char str1[11] = "Hello";
    char str2[6] = "World";
    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}