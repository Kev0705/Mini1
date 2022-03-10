#pragma once
#include "Main.h"

class Stage {
private:

public:
	void startsc();
};

class StartScreen {

private:

public:
	int posx = 0;
	int posy = 0;
	void logo();
	void cursor();
	void menu(int &x, int &y);
	void PrintCursor(int x, int y);
};