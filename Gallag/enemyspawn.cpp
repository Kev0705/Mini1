#pragma once
#include "Main.h"

void Function::CreatEnemy(std::list<std::vector<int>>& xy) //�������� ���� // ����� ��
{

	while (true) // ��Ƽ�����带 ���� ���� �ݺ� 
	{

		int x = random(32, 132);
		int y = random(6, 10);

		std::vector<int> xyVector;
		xyVector.push_back(x);
		xyVector.push_back(y);
		             //������� x , y    �� ��ü ũ�Ⱑ 3�̱� ������ x,y ��ǥ�� ������ �浹�� ó���ϱ� ����

		xy.push_back(xyVector); //

		m1.lock();

		gotoxy(x-1, y); 
		std::cout << '<';
		gotoxy(x, y);
		std::cout << '-';
		gotoxy(x+1, y);
		std::cout << '>';
		
		m1.unlock();

		Sleep(300); //�� ���� ��Ÿ��
	}
}

void Function::DeleteEnemy(std::list<std::vector<int>>& xy) {
	
}

//test������ ���� ��ǥ�� �� �޾ƿ������� Ȯ��
void Function::MoveEnemy(std::list<std::vector<int>>& xy) {

	while (true) {

		for (std::list<std::vector<int>>::iterator IterPos = xy.begin(); IterPos != xy.end();) {
			std::vector<int> xyVector = *IterPos;
			if (xyVector[1] == 44) {
				m1.lock();
				gotoxy(xyVector[0] - 1, xyVector[1]);
				std::cout << ("   ");
				m1.unlock();
				IterPos =xy.erase(IterPos);
				continue;
			}
			m1.lock();
			gotoxy(xyVector[0] - 1, xyVector[1]);
			std::cout << ("   ");
			m1.unlock();

			m1.lock();
			xyVector[1]++;
			*IterPos = xyVector;
			m1.unlock();

			m1.lock();
			gotoxy(xyVector[0] - 1, xyVector[1]);
			std::cout << ("<=>");
			m1.unlock();
			++IterPos;
		}

		Sleep(300);
	}
}
