#pragma once
#include <cursor.h>
#include <stdio.h>

class Stage {


};

class starting : Stage
{
private:
	int x, y;
public:
	starting(int ax, int ay) { x = ax; y = ay; }
	void Name() {
		gotoxy(x, y); puts("2조 MiniProject 000000게임");
	}
	void End() {
		gotoxy(x, y); printf("esc : 게임종료");
	}
	void mainguide() {
		gotoxy(x, y); puts("S: 게임 스타트");
		gotoxy(x, y + 1); puts("G: 게임 가이드");
		gotoxy(x, y + 2); puts("T: 게임 스코어");

	}

};
