#pragma once
#include "Main.h"

void Function::CreatEnemy() //�������� ���� // ����� ��
{

	while (true) // ��Ƽ�����带 ���� ���� �ݺ� 
	{

		int x = random(32, 132);
		int y = random(6, 10);
		
		std::vector<std::tuple<int, int>> enemy; 
		             //������� x , y    �� ��ü ũ�Ⱑ 3�̱� ������ x,y ��ǥ�� ������ �浹�� ó���ϱ� ����

		enemy.push_back({x,y}); //

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
