#include "Stage.h"

int ingame() {		//인게임 화면
	inGame hp(20, 0);
	hp.life();

	inGame h(0, 2);
	h.BackScreen();

	inGame t(0, 40);
	t.BackScreen();

	inGame l(10, 3);
	l.SideScreen();

	inGame k(20, 3);
	k.SideScreen();

	inGame y(150, 3);
	y.SideScreen();

	inGame r(160, 3);
	r.SideScreen();

	inGame sco(50, 0);
	sco.score();

	inGame re(50, 28);
	re.ReturnScreen();

	return 0;

}
