#pragma once
#include "Main.h"
#include <tuple>

struct Enemycord  {
    int x;
    int y;
};


class Function {
	
private:
    std::mutex m1; // �ش� <mutex> m1

    enum { UP, DOWN, LEFT, RIGHT };
	
public:
    
    void MoveFlight(int &posx, int &posy); //mutex m1 ���
    void FireShoot(int &posx, int &posy,int& fire_x, int& fire_y); //mutex m1 ���
    void bullet();
    void CreatEnemy(); //mutex m1 ���
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
    int MenuSelect(int& x, int&y,int &page);
};

