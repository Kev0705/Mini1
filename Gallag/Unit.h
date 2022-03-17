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
	int x; // 최초 좌표
	int y; // 최초 좌표
	int* Ey = NULL; //적 이동한 y좌표
	int* Ex = NULL; //적 이동한 x좌표

public:
	void EnemyUnit(int &x, int &y); //적 모양
	void EnemyStats(); //적 랜덤 위치 생성 함수
	void EnemyMove(); //적 랜덤하게 움직이는 함수
	void EnemyCreate(); //생성
	

};