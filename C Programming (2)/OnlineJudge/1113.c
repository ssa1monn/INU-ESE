// 다음과 같이 main안에 ragged 배열 형태인 char* Names[2][3]가 정의되어있다.

// 텍스트 영역에 존재하는 이 각각이 가리키고 있는 6개의 문자열 "Minji", "HaNni", "hAeRin", "daNieLLE", "HyEin", "Hana" 안에 
// 내가 입력한 key배열에 들어있는 문자와 대소문자를 구분하지 않고, 
// Names에 있는 문자열 중 같은 문자는 
// 총 몇 개 포함 되어 있는 지를 리턴 하는 함수 count()를 정의하라. 
// 단, key 값에 겹치는 문자가 있으면 이미 센 것으로 생각한다.

// (없으면 0개, 대소문자 구분하지 않음, 순서에 관계 없음, key 값은 최대 10자, key에는 영문자만 들어옴)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isCapital(char c);
int count(char* Names[2][3], char key[11]);

int main()
{
    char* Names[2][3] = {
        {"Minji", "HaNni", "hAeRin"},
        {"daNieLLE", "HyEin", "Hana"}
       };
    char key[11];
    int cnt = 0;

    scanf("%s", key);
    cnt = count(Names, key);
    printf("%d", cnt);

    return 0;
}

int isCapital(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    else {
        return 0;
    }
}

int count(char* Names[2][3], char key[11]) {
    int i, j, k, cnt = 0;
    int key_len;
    for (key_len = 0; key[key_len] != '\0'; key_len++);
    int name_len = 0;

    int flag = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {

            for (k = 0; Names[i][j][k] != '\0'; k++) {
                name_len++;
            }

            for (k = 0; k < name_len; k++) {
                for (int l = 0; l < key_len; l++) {

                    for(int m = 0; m < l; m++) {
                        if (isCapital(key[l] == 1)) {
                            if (key[l] == key[m]) flag = 1;
                            else if (key[l] + 32 == key[m]) flag = 1;
                        }
                        else {
                            if (key[l] == key[m]) flag = 1;
                            else if (key[l] - 32 == key[m]) flag = 1;
                        }
                    }

                    if (flag == 1) {
                        flag = 0;
                        continue;
                    }

                    else {
                        if (isCapital(key[l]) == 1) {
                            if (key[l] == Names[i][j][k] || key[l] + 32 == Names[i][j][k]) {
                                cnt++;
                                break;
                            }
                        }
                        else {
                            if (key[l] == Names[i][j][k] || key[l] - 32 == Names[i][j][k]) {
                                cnt++;
                                break;
                            }
                        }
                    }
                }
            }
            name_len = 0;
        }
    }

    return cnt;
}