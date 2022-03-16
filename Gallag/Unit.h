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
	int x;
	int y;
	int* Ey = NULL; //적 y좌표
	int* Ex = NULL; //적 x좌표

public:
	void EnemyUnit(int &x, int &y); // 적 모양
	void EnemyStats(); // 랜덤 위치 함수
	void EnemyMove(); // 적 움직이는 함수

};