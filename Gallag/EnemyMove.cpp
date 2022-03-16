#include "Main.h"

void Enemy::EnemyMove() {
	
	Sleep(10);
	EnemyStats();
	EnemyUnit(x, y);
	Sleep(20);
	gotoxy(x, y);
	printf("   ");
	while (y < 44) {
		srand(time(NULL));
		int i = random(4);
		switch (i)
		{
		case 0:
			x;
			break;
		case 1:
			x+=1;
			break;
		case 2:
			x-=1;
			break;
		case 3:
			y++;
			break;
		}
		
		if (x < 31) {
			x += 2;
		}
		if (x > 130) {
			x -= 2;
		}
		Ex = &x;
		Ey = &y;
		Sleep(30);
		EnemyUnit(*Ex, *Ey);
		Sleep(40);
		gotoxy(x, y);
		printf("   ");
		
	}

}
