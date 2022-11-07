#define bmpFile "C:\\Users\\사용자이름\\Desktop\\resource\\BMP.bmp"
#define nameFile "C:\\Users\\사용자이름\\Desktop\\resource\\name.bmp"

#include <stdio.h>
#include <windows.h>

int main(void) {
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HDC hMemDC = CreateCompatibleDC(hDC);
    SetStretchBltMode(hDC, COLORONCOLOR);

    HBITMAP hBitmap = (HBITMAP)LoadImage(NULL, TEXT(bmpFile), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
    HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);
    BITMAP Bitmap; GetObject(hBitmap, sizeof(BITMAP), &Bitmap);
    StretchBlt(hDC, 50, 50, 850, 400, hMemDC, 0, 0, Bitmap.bmWidth, Bitmap.bmHeight, SRCCOPY);

    HBITMAP nBitmap = (HBITMAP)LoadImage(NULL, TEXT(nameFile), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
    HBITMAP nOldBitmap = (HBITMAP)SelectObject(hMemDC, nBitmap);
    GetObject(nBitmap, sizeof(BITMAP), &Bitmap);
    StretchBlt(hDC, 400, 200, 150, 50, hMemDC, 0, 0, Bitmap.bmWidth, Bitmap.bmHeight, SRCCOPY);

    SelectObject(hMemDC, hOldBitmap);
    DeleteObject(hBitmap);
    DeleteDC(hMemDC);
    ReleaseDC(hWnd, hDC);

    return 0;
}