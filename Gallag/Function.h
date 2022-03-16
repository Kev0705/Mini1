#pragma once
#include "Main.h"

class Function :inGame {
	
private:
    
    enum { UP, DOWN, LEFT, RIGHT };
    int x=85;
    int y=40;
    int* Lx = NULL; //내위치
    int* Ly = NULL; //내위치
    int* Fx = NULL; //발사체 위치
    int* Fy = NULL; //발사체 위치
	
public:
    
    void MoveFlight(StartScreen S, int& page);
    void lasercrash();
    void FireShoot(int &x3, int &y3);
    void CreatEnemy();
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

