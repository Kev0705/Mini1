#include "Main.h"


void Life(int x, int y) { //���� Life�� 3���� ���� �� crush �Լ����� �浹 �Ͼ�� pop_back() ����� ����
	list<int> Life1;
	Life1.push_back(1);
	Life1.push_back(1);
	Life1.push_back(1);
	gotoxy(x, y);
	cout << "Life: " << Life1.size() << endl;

	if (Life1.empty()) // life�� ��� �����Ǹ� ���� ���� ���ڿ� ��� 
	{
		gotoxy(85, 50);
		printf("Game over");
	}
}