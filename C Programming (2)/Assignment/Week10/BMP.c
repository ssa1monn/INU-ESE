#define _CRT_SECURE_NO_WARNINGS
#define bmpFile "C:\\Users\\Username\\Desktop\\resource\\BMP.bmp"
// *** 'bmpFile' 은 배경이 될 사진의 경로입니다. 반드시 사용자에 맞는 경로로 수정해 주십시오. ***
// *** 'bmpFile' is system path to the bitmap that will be the background. Be sure to modify the path to suit yourself. ***

#include <stdio.h>
#include <windows.h>
#include <math.h>

static BITMAP Bitmap;
static BITMAPINFOHEADER bInfo;
static unsigned char* pBits;

void editPixel(int x, int y, int c) {
    int width = ceil((double)Bitmap.bmWidth / (double)100);
    int height = ceil((double)Bitmap.bmHeight / (double)100);
    int flag = abs(Bitmap.bmWidthBytes / (Bitmap.bmBitsPixel / 8) - Bitmap.bmWidth) * 3;

    for (int j = y * height; j < (y + 1) * height; j++) {
        for (int i = x * width; i < (x + 1) * width; i++) {
            pBits[0 + (j * 3 * Bitmap.bmWidth) + (i * 3) + (Bitmap.bmWidthBytes % 3 + flag) * j] = c;
            pBits[1 + (j * 3 * Bitmap.bmWidth) + (i * 3) + (Bitmap.bmWidthBytes % 3 + flag) * j] = c;
            pBits[2 + (j * 3 * Bitmap.bmWidth) + (i * 3) + (Bitmap.bmWidthBytes % 3 + flag) * j] = c;
        }
    }
}

void myName(void) {
    const int NAME[][3] = { 0 };
    // = { {x0,y0,c0,}, {x1,y1,c1}, ... } 
    // 당신의 이름을 이곳에 적으십시오. (x,y) 는 픽셀의 좌표이며, c는 픽셀의 색상입니다 (0 또는 255).
	// Write your name here. (x,y) is the coordinate of the pixel, and c is the color of the pixel (0 or 255).

    for (int i = 0; i < sizeof(NAME) / (sizeof(int) * 3); i++) editPixel(NAME[i][0], NAME[i][1], NAME[i][2]);
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