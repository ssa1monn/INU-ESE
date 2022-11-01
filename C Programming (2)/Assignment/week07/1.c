#include <stdio.h>

int main(void) {
    int arr[5][5] = { 0XA0A1A2A3, 0XB0B1B2B3, 0XC0C1C2C3, 0XD0D1D2D3, 0XE0E1E2E3,
                      0XA4A5A6A7, 0XB4B5B6B7, 0XC4C5C6C7, 0XD4D5D6D7, 0XE4E5E6E7,
                      0XA8A9AAAB, 0XB8B9BABB, 0XC8C9CABB, 0XD8D9DADB, 0XE8E9EAEB,
                      0XACADAEAF, 0XBCBDBEBF, 0XCCCCCDDF, 0XDCDDDEDF, 0XECEDFEEF,
                      0X01020304, 0X05060708, 0X090A0B0C, 0X0D0E0F10, 0X11121314 };

    unsigned char* p = (unsigned char*)arr;

    for (int i = 0; i < 25; i++) {
        for (int j = 3; j >= 0; j--) printf("%02X ", *(p + j + i * 4));
        printf("\n");
    }

    return 0;
}