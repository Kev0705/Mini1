#pragma once
#include "Main.h"

void Function::MoveFlight(int& posx, int& posy, bool& isLoop) // main.cpp ������ ����� posx,posy�� ���������� �޾� ����
{
	TimeDelay Move; //move ������
	Move.timeSet(0.1);

	while (isLoop)
	{
		
		if (Move.timeDelay() == true) {

			int x1 = posx;
			int y1 = posy;

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //����
				posx -= 1;
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
				posx += 1;
			}
			if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
				posy -= 1;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
				posy += 1;
			}



			if (posx < 30) posx += 1;
			if (posx >= 132) posx -= 1;

			if (posy <= 10) posy += 1;
			if (posy >= 45) posy -= 1;

			m1.lock();
			gotoxy(x1, y1);
			std::cout << ("   ");

			gotoxy(posx, posy);
			std::cout << ("<O>"); // ���� Unit ������ �и���ų ����    
			m1.unlock();

		}
	}
}