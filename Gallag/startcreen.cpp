#include "Main.h"

void StartScreen::menu(int &x,int &y) 
{
	//콘솔의 처음 위치에서부터 위치 지정 default : sx=0, sy=0 StartScreen Class의 선언 내에서 확인하세요.
	posx = x+60;
	posy = y+30;

	gotoxy(posx, posy);
	printf("게임 시작");

	posy = posy + 2; // 게임 시작 2칸 밑에 스코어

	gotoxy(posx, posy);
	printf("스코어");
	
	posy = posy + 2; // 스코어 두 칸 밑에 게임종료

	gotoxy(posx, posy);
	printf("게임 종료");

};