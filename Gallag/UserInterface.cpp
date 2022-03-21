#pragma once
#include "UserInterface.h"
#include "Main.h"


void UserInterface::esc() {
	gotoxy(x, y+2); //or gotoxy(10,3)
	printf("ESC : 돌아가기");
}
void UserInterface::life() {
	//gotoxy(x, y); printf("Life : %d "); //하트 asc코드 확인하고 해당 부분 아군기체 피해시 깍는 로직 필요

}
void UserInterface::score() {
	//gotoxy(x, y); printf("score: %d"); // 점수 쌓는 로직 생성 후 추가 필요
}
void UserInterface::ReturnScreen() {
	//gotoxy(x, y); printf("R: 이전화면");
}
void UserInterface::UserControlGuide() {
	gotoxy(x, y + 30); printf("        ↑");
	gotoxy(x, y + 31); printf("이동: ←↓→ ");
	gotoxy(x, y + 34); printf("공격: spacebar");
};
