#include "Score.h"



void Score::map()
{
	system("cls");

	BackScreen();
	SideScreen();
	Esc();
};

void Score::showScore(StartScreen S, int& page)
{
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
