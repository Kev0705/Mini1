#pragma once
#include "Main.h"

void BackScreen() 
{
	int y = 5;
	for (int x = 10; x < 155; x++)
		putchxy(x, y, '#');
	for (int x = 10; x < 155; x++)
		putchxy(x, y+40, '#');
}

void SideScreen()
{
	int x = 10;
	for (int y = 5; y < 45; y++)
		putchxy(x, y, '#');
	for (int y = 5; y < 46; y++)
		putchxy(x+145, y, '#');
};

void Sideline() 
{
	int x = 30;
	for (int y = 5; y < 45; y++)
		putchxy(x , y, '#');
	for (int y = 5; y < 46; y++)
		putchxy(x + 105, y, '#');
}

void inGame::map()
{
	system("cls");

	BackScreen();
	SideScreen();
	Sideline();

	//void BackScreen();
	//void SideScreen();

};
/* ±¸ÇöÀü
void life();
void score();
void ReturnScreen();
*/
