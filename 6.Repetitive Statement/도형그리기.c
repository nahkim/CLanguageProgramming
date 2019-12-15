#include <windows.h>
#include <stdio.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30;		// 첫 번째 사각형의 x좌표
	int y = 100;		// 첫 번째 사각형의 y좌표
	int i = 0;		// 반복 제어 변수

	//크기 60을 가지는 정사각형을 10의 간격으로 10개를 그려 보세요.
	while (i<10)
	{
		
		Rectangle(hdc,x,y,x+60,y+60);
		x += 70;
		i++;
		

	}

	return 0;
}
