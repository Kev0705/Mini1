#pragma once
#include "Main.h"

class Function {
	
private:
    
    enum { UP, DOWN, LEFT, RIGHT };
    int x=85;
    int y=40;
	
public:
    void MoveFlight();
};

class Select : Function
{
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define SPACEBAR 32
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