// ������ ���� main�ȿ� ragged �迭 ������ char* Names[2][3]�� ���ǵǾ��ִ�.

// �ؽ�Ʈ ������ �����ϴ� �� ������ ����Ű�� �ִ� 6���� ���ڿ� "Minji", "HaNni", "hAeRin", "daNieLLE", "HyEin", "Hana" �ȿ� 
// ���� �Է��� key�迭�� ����ִ� ���ڿ� ��ҹ��ڸ� �������� �ʰ�, 
// Names�� �ִ� ���ڿ� �� ���� ���ڴ� 
// �� �� �� ���� �Ǿ� �ִ� ���� ���� �ϴ� �Լ� count()�� �����϶�. 
// ��, key ���� ��ġ�� ���ڰ� ������ �̹� �� ������ �����Ѵ�.

// (������ 0��, ��ҹ��� �������� ����, ������ ���� ����, key ���� �ִ� 10��, key���� �����ڸ� ����)

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