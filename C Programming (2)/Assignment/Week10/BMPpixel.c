#define _CRT_SECURE_NO_WARNINGS
#define bmpFile "C:\\Users\\gwski\\Downloads\\resource\\BMP.bmp"
// *** bmpfile 은 배경이 될 사진의 경로입니다. 반드시 사용자에 맞는 경로로 수정해 주십시오. ***

#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

static BITMAP Bitmap;
static BITMAPINFOHEADER bInfo;
static unsigned char* pBits;

void editPixel(int x, int y, int c) {
    int width = ceil((double)Bitmap.bmWidth / (double)100);
    int height = ceil((double)Bitmap.bmHeight / (double)100);

    for (int i = x * width; i < (x + 1) * width; i++) {
        for (int j = y * height; j < (y + 1) * height; j++) {
            pBits[0 + (j * 3 * Bitmap.bmWidth) + (i * 3)] = c;
            pBits[1 + (j * 3 * Bitmap.bmWidth) + (i * 3)] = c;
            pBits[2 + (j * 3 * Bitmap.bmWidth) + (i * 3)] = c;
        }
    }
}

void myName(void) {
    int i, j;

    // '고'
    // ㅗ
    for (i = 0; i < 9; i++) editPixel(i, 0, 255);
    for (i = 1; i < 8; i++) editPixel(i, 1, 0); editPixel(0, 1, 255); editPixel(8, 1, 255);
    editPixel(0, 2, 255); editPixel(1, 2, 255); editPixel(2, 2, 255); editPixel(3, 2, 255); 
    editPixel(4, 2, 0); 
    editPixel(5, 2, 255); editPixel(6, 2, 255); editPixel(7, 2, 255); editPixel(8, 2, 255);
	// ㄱ
    editPixel(3, 3, 255); editPixel(4, 3, 0); editPixel(5, 3, 255);
    for (i = 3; i < 9; i++) editPixel(i, 4, 255);
    for (j = 5; j < 8; j++) { editPixel(6, j, 255); editPixel(7, j, 0); editPixel(8, j, 255); }
    for (i = 0; i < 6; i++) editPixel(i, 7, 255);
    for (i = 1; i < 8; i++) editPixel(i, 8, 0);
    editPixel(0, 8, 255); editPixel(8, 8, 255);
    for (i = 0; i < 9; i++) editPixel(i, 9, 255);

    // '우'
    // ㅜ
    editPixel(12, 0, 255); editPixel(13, 0, 255); editPixel(14, 0, 255);
    editPixel(12, 1, 255); editPixel(13, 1, 0); editPixel(14, 1, 255);
    for (i = 9; i < 18; i++) editPixel(i, 2, 255); editPixel(12, 2, 255); editPixel(13, 2, 0); editPixel(14, 2, 255);
    for (i = 10; i < 17; i++) editPixel(i, 3, 0); editPixel(9, 3, 255); editPixel(17, 3, 255);
    for (i = 9; i < 18; i++) editPixel(i, 4, 255);	
	// ㅇ
    for (i = 10; i < 17; i++) { editPixel(i, 5, 255); editPixel(i, 6, 255); editPixel(i, 7, 255); editPixel(i, 8, 255); }
    editPixel(12, 5, 0); editPixel(13, 5, 0); editPixel(14, 5, 0);
    editPixel(11, 6, 0); editPixel(15, 6, 0);
    editPixel(11, 7, 0); editPixel(15, 7, 0);
    editPixel(12, 8, 0); editPixel(13, 8, 0); editPixel(14, 8, 0);
    editPixel(11, 9, 255); editPixel(12, 9, 255); editPixel(13, 9, 255); editPixel(14, 9, 255); editPixel(15, 9, 255);

    // '석'
    // ㄱ
    editPixel(24, 0, 255); editPixel(25, 0, 255); editPixel(26, 0, 255);
    editPixel(24, 1, 255); editPixel(25, 1, 0); editPixel(26, 1, 255);
    for (i = 18; i < 25; i++) editPixel(i, 2, 255); editPixel(25, 2, 0); editPixel(26, 2, 255);
    for (i = 18; i < 27; i++) editPixel(i, 3, 0);
    editPixel(18, 3, 255); editPixel(26, 3, 255);
    for (i = 18; i < 27; i++) { editPixel(i, 4, 255); editPixel(i, 5, 255); editPixel(i, 6, 255); }
    // 서
    editPixel(19, 5, 0); editPixel(23, 5, 0);
    editPixel(20, 6, 0); editPixel(22, 6, 0);
    for (i = 19; i < 27; i++) for (j = 7; j < 9; j++) editPixel(i, j, 255);
    for (j = 5; j < 9; j++) { editPixel(25, j, 0); editPixel(26, j, 255); }
    editPixel(20, 7, 0); editPixel(22, 7, 0); editPixel(23, 7, 0); editPixel(24, 7, 0); 
    editPixel(21, 8, 0);
    editPixel(20, 9, 255); editPixel(21, 9, 255); editPixel(22, 9, 255); 
    editPixel(24, 9, 255); editPixel(25, 9, 255); editPixel(26, 9, 255);
}

int main(void) {
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HDC hMemDC = CreateCompatibleDC(hDC);
    SetStretchBltMode(hDC, COLORONCOLOR);

    HBITMAP hBitmap = (HBITMAP)LoadImage(NULL, TEXT(bmpFile), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
    HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);
    GetObject(hBitmap, sizeof(BITMAP), &Bitmap);
    pBits = (unsigned char*)Bitmap.bmBits;
    myName();

    StretchBlt(hDC, 50, 50, 800, 400, hMemDC, 0, 0, Bitmap.bmWidth, Bitmap.bmHeight, SRCCOPY);

    SelectObject(hMemDC, hOldBitmap);
    DeleteObject(hBitmap);
    DeleteDC(hMemDC);
    ReleaseDC(hWnd, hDC);

    return 0;
}