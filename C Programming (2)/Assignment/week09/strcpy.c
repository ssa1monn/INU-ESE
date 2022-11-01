#include <stdio.h>

void strcpy(char* str1, char* str2) {
    for (int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
        if(str2[i + 1] == '\0') {
            str1[i + 1] = '\0';
            break;
        }
    }
}

int main(void) {
    char str1[7] = "Yellow";
    char str2[5] = "Blue";
    strcpy(str1, str2);
    printf("%s", str1);

    return 0;
}