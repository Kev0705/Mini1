#pragma once
#include <cursor.h>
#include <stdio.h>	
#include <conio.h>
#define putchxy(x, y ,c) {gotoxy(x,y); _putch(c);};
#define putsxy(x, y, s) {gotoxy(x, y);puts(s);};

class Stage {

};



/*class starting : Stage
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
*/
class Guide : Stage
{
private:
	int x, y;
public:
	Guide(int ax, int ay) { x = ax; y = ay; }
	void GuideControl() {
		gotoxy(x, y); printf("<x> : 적군은 이렇습니다 1포인트를 줍니다.");
		gotoxy(x, y+1); printf("<o> : 아군은 이렇습니다.");
		gotoxy(x, y + 2); printf("<H> : 하트를 채워줍니다.");
		gotoxy(x, y + 3); printf("<B> : 화면에 있는 적을 없애버립니다.");
		gotoxy(x, y + 4); printf("<P> : 공격력을 상승시킵니다.");
	}

};

class inGame : Stage
{
private:
	int x, y;
	char ch;
public:
	inGame(int ax, int ay) { x = ax; y = ay; }
	void life() {
		gotoxy(x, y); printf("Life : ♥♥♥"); //하트 asc코드 확인하고 해당 부분 아군기체 피해시 깍는 로직 필요
	}

	void score() {
		gotoxy(x, y); printf("score: 000000"); // 점수 쌓는 로직 생성 후 추가 필요
	}

	void ReturnScreen() {
		gotoxy(x, y); printf("R: 이전화면");
	}

	void BackScreen() {
		gotoxy(x, y);
		if (x = 0); {
			for (x = 3; x <160 ; x++) {
				putchxy(x, y, '#');
			}
		}
	}
	void SideScreen() {
		gotoxy(x, y);
		if (y = 3); {
			for (y = 3; y < 40; y++) {
				putchxy(x, y, '#');
			}
		}
	}
	
};
