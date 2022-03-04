#include "Main.h"

int main(void) {
	Stage start;
	StartScreen startmenu;
	
	start.startsc();
	startmenu.screen();
	for (;;)
	{
		startmenu.cursor();
	}
	return 0;
}