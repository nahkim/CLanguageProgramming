#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

void line(HDC hdc, int x1, int y1, int x2, int y2);
int randint(int x1, int x2);

int main(void) {
	int  i;
	HDC hdc = GetWindowDC(GetForegroundWindow());

	for (i = 0; i < 30; i++) {
		int x1 = randint(0, 900);
		int y1 = randint(100, 400);
		int x2 = randint(0, 900);
		int y2 = randint(100, 400);
		line(hdc, x1, y1, x2, y2);
		Sleep(100);		// 100ms 동안 잔다.
	}
}



// (x1, y1)에서 (x2, y2)까지 직선을 그리는 함수
void line(HDC hdc, int x1, int y1, int x2, int y2)
{
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
}

// [x1, y1] 구간에서 난수를 발생하는 함수
int randint(int x1, int x2)
{
	return x1 + rand() % (x2 - x1);
}


