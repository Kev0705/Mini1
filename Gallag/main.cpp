#pragma once
#include "Main.h"


int main(void) {
	Stage start;
	StartScreen startmenu;
	Function f;
	SelectStartMenu selectstartmenu;

	start.startsc();
	startmenu.logo();
	startmenu.menu(startmenu.posx,startmenu.posy);

	for (;;)
	{
		startmenu.PrintCursor(startmenu.posx,startmenu.posy);
		selectstartmenu.MenuSelect(startmenu.posx, startmenu.posy);

		//f.MoveFlight(startmenu.posx,startmenu.posy);
	}
	return 0;
}