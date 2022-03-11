#pragma once
#include "Event.h"
#include "Stage.h"
#include "Unit.h"
#include "UserInterface.h"
#include <iostream>


/*int start() {
	starting s(10, 5);
	s.Name();
	starting e(0, 0);
	e.End();
	starting g(15, 7);
	g.mainguide();

	return 0;
}
*/


int ingame() {		//인게임 화면
	inGame hp(20, 0);
	hp.life();
	
	inGame h(0, 2);
	h.BackScreen();

	inGame t(0, 40);
	t.BackScreen();
	
	inGame l(10, 3);
	l.SideScreen();

	inGame ll(20, 3);
	ll.SideScreen();

	inGame rr(150, 3);
	rr.SideScreen();

	inGame r(160, 3);
	r.SideScreen();

	inGame re(50, 28);
	re.ReturnScreen();

	return 0;
			
}

/*int Mapchange() {
	int ch;
	for (;;) {
			ch = _getch();
			if (ch == 0xE0 || ch == 0)
			{
				ch = _getch();
				switch (ch)
				{

				}
			}
			else {
				ch = _getch();
				switch (ch)
				{
				case 'q':
				case 'Q':
					exit;
				case 's':
				case'S':
					clrscr();
					return ingame();
				case 'r':
				case 'R':
					clrscr();
					return start();

				}
			}
		}

}
*/