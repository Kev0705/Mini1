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
	int x=20;
	int y=10;
	//printf("d"); //왜 gotoxy가 안되지????????????????????????????????????????
	while (fin.getline(Text, sizeof(Text))) {
		gotoxy(x, y);
		std::cout << Text;
		y += 1;
	}
	fin.close();

	for (;;) {
		
		if (KeyScan()) {
			page = 0;
			system("cls");
			S.logo();
			S.menu();
			break;
		}
	}

};
