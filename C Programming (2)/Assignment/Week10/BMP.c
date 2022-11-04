#include <stdio.h>
#include <windows.h>

static HWND hWnd;
static HINSTANCE hInst;

int main(void) {
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HDC hMemDC = CreateCompatibleDC(hDC);

	HBITMAP hBitmap = (HBITMAP)LoadImage(NULL, TEXT("C:\\Users\\gwski\\Downloads\\picture.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
    HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);

    BITMAP Bitmap;
    GetObject(hBitmap, sizeof(BITMAP), &Bitmap);

    BitBlt(hDC, 50, 50, 50 + Bitmap.bmWidth, 50 + Bitmap.bmHeight, hMemDC, 0, 0, SRCCOPY);

    SelectObject(hMemDC, hOldBitmap);
    DeleteObject(hBitmap); 
    DeleteDC(hMemDC);
    ReleaseDC(hWnd, hDC);

    return 0;
}