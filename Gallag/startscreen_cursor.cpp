#include "Main.h"

void StartScreen::PrintCursor()
{
	gotoxy(posx - 5, posy); // defalut : x=55
	printf_s("��");
};

void StartScreen::PrintCursor_blink()
{
	gotoxy(posx - 5, posy); // ���� �ڸ��� ���� �ٸ� �ﰢ�� ����� 
	printf_s("��");
};