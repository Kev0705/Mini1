#include "Main.h"

void StartScreen::menu(int &x,int &y) 
{
	//�ܼ��� ó�� ��ġ�������� ��ġ ���� default : sx=0, sy=0 StartScreen Class�� ���� ������ Ȯ���ϼ���.
	posx = x+60;
	posy = y+30;

	gotoxy(posx, posy);
	printf("���� ����");

	posy = posy + 2; // ���� ���� 2ĭ �ؿ� ���ھ�

	gotoxy(posx, posy);
	printf("���ھ�");
	
	posy = posy + 2; // ���ھ� �� ĭ �ؿ� ��������

	gotoxy(posx, posy);
	printf("���� ����");

};