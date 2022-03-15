#include "Main.h"



void Function::CreatEnemy() //랜덤으로 생성은 되는데 이걸 움직이게 할려면 머리가 아픕니다.
{
	TimeDelay T;
	T.timeSet(0.1);

	while (true) {

		struct Enemy {
			int x;
			int y;
		};


		Enemy e[4]{};


		for (int i = 0; i < 4; i++) {
			e[i].x = (random(30) + 10) * 3;
		}

		for (int k = 6; k < 45; k++) {
			e[1].y = k;
			e[2].y = k;
			e[3].y = k;
			for (int i = 0; i < 4; i++) {

				gotoxy(e[i].x, e[i].y);
				printf("<x>");
				 
			}

		}
	}
}
