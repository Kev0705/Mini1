#pragma once
#include "Main.h"
class crush
{
private:

public:
	void fire_enemy_crush(std::vector<std::vector<int>>& xy_fire, std::list<std::vector<int>>& xy_enemy);
	void my_enemy_crush(int& posx,int& posy,std::list<std::vector<int>>& xy_enemy);
};

