#include "Main.h"

void StartScreen::PrintCursor(int x, int y)
{
	gotoxy(x - 5, y); // defalut : x=55
	printf_s("▶");

	gotoxy(x - 5, y); // 같은 자리에 색상 다른 삼각형 덮어쓰기 
	printf_s("▷");
};