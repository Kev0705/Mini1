#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#define Left 75
#define Right 77
const int WALL1 = 1;
const int WALL2 = 50;
using namespace std;

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

class Awing {
private:
	char coX, coY;
public:
	char A[2][6];                   //벽 만들 때 삽질했던 이유를 겨우 깨달았음
	Awing(int x, int y) {
		this->coX = x; this->coY = y;
		gotoxy(this->coX, this->coY);
		char B[2][6] = { "  A  ", " <O> " };
		strcpy(A[0], B[0]); strcpy(A[1], B[1]);
	}
	void setcoX(int n) {
		this->coX = this->coX + (n);
		if (this->coX == (WALL1 + 1) || this->coX == (WALL2 - 4)) {		//벽과의 충돌 코드
			this->coX = this->coX - (n);
		}
	}
	char getcoX() { return this->coX; }
	char getcoY() { return this->coY; }
};

class Actrl {
private:
	Awing awing;
public:
	Actrl(char x, char y) : awing(x, y) { }

	void move() {
		int n = getch();
		switch (n) {
		case Left: awing.setcoX(-1); break;
		case Right: awing.setcoX(1); break;
		}
	}
	void showAwing() {
		gotoxy(awing.getcoX(), awing.getcoY());
		cout << awing.A[0];
		gotoxy(awing.getcoX(), awing.getcoY() + 1);
		cout << awing.A[1];
	}
};

class Wall {
private:
	int wX;
public:
	Wall(int x) {
		this->wX = x;
	}
	void showWall() {
		for (int i = 0; i < 24; i++) {
			gotoxy(wX, i);
			cout << "□" << endl;
		}
	}
	int getwX() {
		return wX;
	}
};

int main() {
	Wall w1(WALL1), w2(WALL2);
	Actrl AC(25, 22);
	w1.showWall();
	w2.showWall();
	while (1) {
		AC.showAwing();
		AC.move();
		AC.showAwing();
	}
	return 0;
}