#pragma once
#include "Main.h"
#include <tuple>

class Function {

private:
    std::mutex m1; // 해당 <mutex> m1

    enum { UP, DOWN, LEFT, RIGHT };

public:
    
    void MoveFlight(int &posx, int &posy); //mutex m1 사용
    void FireShoot(int &posx, int &posy, std::vector<int>& xy_fire); //mutex m1 사용
    void bullet();
    void CreatEnemy(std::list<std::vector<int>>& xy); //mutex m1 사용
    void MoveEnemy(std::list<std::vector<int>>& xy);
    void DeleteEnemy(std::list<std::vector<int>>& xy);
    void fire_enemy_crush(std::vector<std::vector<int>>& xy_fire, std::list<std::vector<int>>& xy_enemy, std::list<int>& Score_Count);
    void my_enemy_crush(int& posx, int& posy, std::list<std::vector<int>>& xy_enemy);
    void Crash(int& posx, int& posy, int& fire_x, int& fire_y, std::list<std::vector<int>>& xy);
    void Scorecount(std::list<int>& Score_Count);
};

class Select : Function
{
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define SPACEBAR 32
#define ESC 27
};

class SelectMenu : Select
{


};

class SelectStartMenu : SelectMenu
{
private:
    char c;
public:
    int MenuSelect(int& x, int& y, int& page);
};