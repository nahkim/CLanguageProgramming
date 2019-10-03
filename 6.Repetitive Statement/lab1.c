// 반복을 사용하여 도형을 그리자

#include <windows.h>
#include <stdio.h>

int main(void)
{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		int x = 30;
		int y = 100;
		int i = 0;

		while (i < 10)
		{
			Rectangle(hdc, x, y, x+60, y+60);
			x = x + 70;
			
			i++;
		}
		
	
	return 0;
}