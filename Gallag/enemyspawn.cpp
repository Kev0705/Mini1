#include "Main.h"
#include <random>

void Function::CreatEnemy() //�������� ���� // ����� ��
{
	//TimeDelay T;
	//T.timeSet(0.1);

	while (true) // ��Ƽ�����带 ���� ���� �ݺ� 
	{

		struct Enemy
		{
			int x;
			int y;
		};

		std::random_device rd; // ���� ������

		std::mt19937_64 mt(rd()); // ���� ������ 

		std::uniform_int_distribution<int> range(31, 131); //31~131 ���� ���� ����, �� ���� ���� �� �ʿ� X

		int val = range(mt); //���ٷκ��� ���� mt���� val���� ����
		
		m1.lock();

		gotoxy(val, 6); //(�ӽ�) y=6�ٿ� val�̶�� ���������� Ŀ�� �̵�
		std::cout <<"<->"; // �� ����

		m1.unlock();

		Sleep(100); //�� ���� ��Ÿ��
	}
}
