#pragma once
#include "Main.h"

class Function :inGame {
	
private:
    
    enum { UP, DOWN, LEFT, RIGHT };
	
public:
    
    void MoveFlight(int &posx, int &posy);
    void FireShoot(int posx, int posy);
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