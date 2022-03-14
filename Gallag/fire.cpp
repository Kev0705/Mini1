#include "Main.h"




int Fire::Fireshoot(int &x, int &y)
{
	for(;;)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			gotoxy(x, y + 1);
			_putch('|');
			y++;
		}
	}
	ldx = &x;
	ldy = &y;
	return;
}
