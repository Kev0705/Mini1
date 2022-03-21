#pragma once
#include "Score.h"

void Score::map()
{
	system("cls");

	BackScreen();
	SideScreen();
};

void Score::showScore(const char *dir)
{
	std::ifstream fin(dir);
	char Text[100] = { 0, };
	int TextSort[100];
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

void Score::showScore(const char* dir, int x, int y) {

	std::ifstream fin(dir);
	char Text[100] = { 0, };
	int TextSort[100];
	int length = 0;

	while (fin.getline(Text, sizeof(Text))) {
		TextSort[length] = atoi(Text);
		length++;
	}

	std::sort(TextSort, TextSort + length, std::greater<int>());

	for (int i = 0;i < length;i++) {
		gotoxy(x, y);
		std::cout << i + 1 << ". " << TextSort[i];
		y += 1;
	}

	fin.close();
}
