#include <stdio.h>

#if 0
void swap(int *a, int *b, int k[]) {
    int temp = *a;
    *a = *b;
    *b = temp;

    int length = 0;

    for (int i = 0; i < 100; i++) {
        if(k[i] == -1) {
            length = i - 1;
            break;
        }
    }
            
    for (int i = 0; i <= length / 2; i++) {
        int temp = k[i];
        k[i] = k[length - i];
        k[length - i] = temp;
    }   
}

int main(void) {
    int i = 3, j = 5, k[6] = {1, 2, 3, 4, 5, -1};
    swap(&i, &j, k);
    printf("%d %d\n", i, j);
    for (int i = 0; k[i] != -1; i++) {
        printf("%d ", k[i]);
    }
}
#endif

int main(void) {
    int arr[5][5] = { 0X01020304, 0X05060708, 0X090A0B0C, 0X0D0E0F10, 0X10111213,
                    0X14151617, 0X18191A1B, 0X1C1D1E1F, 0X20212223, 0X24252627,
                    0X28292A2B, 0X2C2D2E2F, 0X30313233, 0X34353637, 0X38393A3B,
                    0X3C3D3E3F, 0X40414243, 0X44454647, 0X48494A4B, 0X4C4D4E4F,
                    0X50515253, 0X54555657, 0X58595A5B, 0X5C5D5E5F, 0X60616263, };
    
    char *p = (char *)arr;

    for(int i = 0; i < 25; i++) {
        printf("arr[%d] : ", i);
        for(int j = 3; j >= 0; j--) printf("%02X ", *(p + j + i * 4));
        printf("\n");
    }

    return 0;
}