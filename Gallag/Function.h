#pragma once
#include "Main.h"

class Function :inGame {
	
private:
    
    enum { UP, DOWN, LEFT, RIGHT };
    int x=85;
    int y=40;
    int* Lx = NULL;//����ġ
    int* Ly = NULL;//����ġ
    int* Fx = NULL;//�߻�ü ��ġ
    int* Fy = NULL;//�߻�ü ��ġ
	
public:
    
    void MoveFlight(StartScreen S, int& page);
    void lasercrash();
    void FireShoot(int &x3, int &y3);
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

