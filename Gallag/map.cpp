#pragma once
#include "Main.h"

void BackScreen() 
{
	int y = 20;
	for (int x = 0; x < 160; x++)
		putchxy(x, y, '#');
}

void SideScreen()
{
	int x = 20;
	for (int y = 3; y < 40; y++)
		putchxy(x, y, '#');
};

void inGame::map()
{
	system("cls");
	printf("1111");
	putchxy(5, 5, '#');
	
	int y = 20;
	for (int x = 0; x < 160; x++)
	{
		putchxy(x, y, '#');
	}
	int x = 20;
	for (int y = 3; y < 40; y++)
	{
		putchxy(x, y, '#');
	}
	//void BackScreen();
	//void SideScreen();

};
/* ±¸ÇöÀü
void life();
void score();
void ReturnScreen();
*/
