#pragma once
#include "Main.h"

//���Ʒ� x��
void inGame::BackScreen()
{
	int y = 5;
	for (int x = 10; x < 155; x++)
		putchxy(x, y, '#');
	for (int x = 10; x < 155; x++)
		putchxy(x, y+40, '#');
}
//outline y��
void inGame::SideScreen()
{
	int x = 10;
	for (int y = 5; y < 45; y++)
		putchxy(x, y, '#');
	for (int y = 5; y < 46; y++)
		putchxy(x+145, y, '#');
};
//inline y��
void inGame::Sideline()
{
	int x = 30;
	for (int y = 5; y < 45; y++)
		putchxy(x , y, '#');
	for (int y = 5; y < 46; y++)
		putchxy(x + 105, y, '#');
}


/*
bool inGame::KeyScan() {
	if (_kbhit())
	{
		char c = _getch();
		if (c == ESC)
			return true;
	}

	return false;
}
*/

void inGame::map()
{
	system("cls");

	BackScreen();
	SideScreen();
	Sideline();

	//void BackScreen();
	//void SideScreen();

};
/* ������
void life();
void score();
void ReturnScreen();
*/

