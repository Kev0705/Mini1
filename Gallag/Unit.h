#pragma once
class Unit 
{


};

class Ally : Unit
{


};

class Enemy : Unit
{
private:
	int x; // ���� ��ǥ
	int y; // ���� ��ǥ
	int* Ey = NULL; //�� �̵��� y��ǥ
	int* Ex = NULL; //�� �̵��� x��ǥ

public:
	void EnemyUnit(int &x, int &y); // �� ���
	void EnemyStats(); // �� ���� ��ġ ���� �Լ�
	void EnemyMove(); // �� �����ϰ� �����̴� �Լ�

};