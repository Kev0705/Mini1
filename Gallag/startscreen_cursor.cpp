#include "Main.h"

void StartScreen::PrintCursor(int x, int y)
{
	gotoxy(x - 5, y); // defalut : x=55
	printf_s("��");

	gotoxy(x - 5, y); // ���� �ڸ��� ���� �ٸ� �ﰢ�� ����� 
	printf_s("��");
};