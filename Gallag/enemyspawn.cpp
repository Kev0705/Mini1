#pragma once
#include "Main.h"

void Function::CreatEnemy(std::list<std::vector<int>>& xy_enemy) //�������� ���� // ����� ��
{
	while (true) // ��Ƽ�����带 ���� ���� �ݺ� 
	{

		int x = (random(1, 30) + 10) * 3;
		int y = random(6, 10);

		std::vector<int> enemyVector;
		enemyVector.push_back(x);
		enemyVector.push_back(y);
		xy_enemy.push_back(enemyVector);


		//������� x , y    �� ��ü ũ�Ⱑ 3�̱� ������ x,y ��ǥ�� ������ �浹�� ó���ϱ� ����

		m1.lock();
		gotoxy(x - 1, y);
		std::cout << '<';
		gotoxy(x, y);
		std::cout << '-';
		gotoxy(x + 1, y);
		std::cout << '>';
		m1.unlock();

		Sleep(300); //�� ���� ��Ÿ��
	}
}

void Function::DeleteEnemy(std::list<std::vector<int>>& xy) {

}

//test������ ���� ��ǥ�� �� �޾ƿ������� Ȯ��
void Function::MoveEnemy(std::list<std::vector<int>>& xy_enemy) {

	while (true) {
		//list ��Ҹ� �ݺ� << list��� = vector(x,y)���� ����Ű�� ����
		for (std::list<std::vector<int>>::iterator IterPos = xy_enemy.begin(); IterPos != xy_enemy.end();) {
			std::vector<int> enemyVector = *IterPos;
			//y�� map ��ǥ = 45. map�� �����ϸ� list��� ���� �� �ֻܼ��� enemy ����
			if (enemyVector[1] == 44) {
				m1.lock();
				gotoxy(enemyVector[0] - 1, enemyVector[1]);
				std::cout << ("   ");
				m1.unlock();
				IterPos = xy_enemy.erase(IterPos);
				continue;
			}
			//���� ��ǥ clear �� ������ �̵��Ͽ� enemy ���
			m1.lock();
			gotoxy(enemyVector[0] - 1, enemyVector[1]);
			std::cout << ("   ");
			m1.unlock();

			m1.lock();
			enemyVector[1]++;
			*IterPos = enemyVector;
			m1.unlock();

			m1.lock();
			gotoxy(enemyVector[0] - 1, enemyVector[1]);
			std::cout << ("<=>");
			m1.unlock();
			++IterPos;
		}

		Sleep(300);
	}
}
