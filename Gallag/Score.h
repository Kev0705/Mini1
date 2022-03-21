#pragma once
#include "Main.h"

class Score : inGame {
private:
	int x = 20;
	int y = 10;
public:
	void map();
	void showScore(const char* dir);
	void showScore(const char* dir,int x,int y);
};

class GameOver : public Score {
	int x = 13;
	int y = 8;
public:
	void scoreSave(const char* dir, int& score);
	void showScore(const char* dir, int& score);
	void showLogo();
};


