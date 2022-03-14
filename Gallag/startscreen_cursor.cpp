#include "Main.h"

void StartScreen::PrintCursor()
{
	gotoxy(posx - 5, posy); // defalut : x=55
	printf_s("▶");
};

void StartScreen::PrintCursor_blink()
{
	gotoxy(posx - 5, posy); // 같은 자리에 색상 다른 삼각형 덮어쓰기 
	printf_s("▷");
};