#include "Main.h"

void StartScreen::menu(int &x,int &y) 
{
	//�ܼ��� ó�� ��ġ�������� ��ġ ���� default : posx=0, posy=0 StartScreen Class�� ���� ������ Ȯ���ϼ���.
	posx = x+60;
	posy = y+30;

	gotoxy(posx-5, posy);
	printf("��    ���� ����");

	posy = posy + 2; // ���� ���� 2ĭ �ؿ� ���ھ�

	gotoxy(posx-5, posy);
	printf("��    ���ھ�");
	
	posy = posy + 2; // ���ھ� �� ĭ �ؿ� ��������

	gotoxy(posx-5, posy);
	printf("��    ���� ����");

};