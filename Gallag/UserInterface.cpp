#pragma once
#include "UserInterface.h"
#include "Main.h"


void UserInterface::esc() {
	gotoxy(x, y+2); //or gotoxy(10,3)
	printf("ESC : ���ư���");
}
void UserInterface::life() {
	//gotoxy(x, y); printf("Life : %d "); //��Ʈ asc�ڵ� Ȯ���ϰ� �ش� �κ� �Ʊ���ü ���ؽ� ��� ���� �ʿ�

}
void UserInterface::score() {
	//gotoxy(x, y); printf("score: %d"); // ���� �״� ���� ���� �� �߰� �ʿ�
}
void UserInterface::ReturnScreen() {
	//gotoxy(x, y); printf("R: ����ȭ��");
}
void UserInterface::UserControlGuide() {
	gotoxy(x, y + 30); printf("        ��");
	gotoxy(x, y + 31); printf("�̵�: ���� ");
	gotoxy(x, y + 34); printf("����: spacebar");
};
