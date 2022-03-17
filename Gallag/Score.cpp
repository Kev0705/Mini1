#pragma once
#include "Score.h"

void Score::map()
{
	system("cls");

	BackScreen();
	SideScreen();
	Esc();
};

void Score::showScore(StartScreen S, int& page, const char *dir)
{
	std::ifstream fin(dir);
	char Text[100] = { 0, };
	int TextSort[100];
	int x=20;
	int y=10;
	int length = 0;

	while (fin.getline(Text, sizeof(Text))) {
		TextSort[length] = atoi(Text);
		length++;
	}

	std::sort(TextSort, TextSort+length, std::greater<int>());

	for (int i = 0;i < length;i++) {
		gotoxy(x, y);
		std::cout <<i+1<<". "<< TextSort[i];
		y += 1;
	}

	fin.close();


};
