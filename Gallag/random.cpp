#include "Main.h"

int random(int from, int to)
{
	std::random_device rd; // ���� ������
	std::mt19937_64 mt(rd()); // ���� ������ 
	std::uniform_int_distribution<int> range(from, to); //x,y ���� ���� ����, �� ���� ���� �� �ʿ� X
	int val = range(mt); //���ٷκ��� ���� mt���� val���� ����

	return val;
}