#pragma once
#include <cursor.h>
#include <stdio.h>

class Stage {


};

class starting : Stage
{
private:
	int x, y;
public:
	starting(int ax, int ay) { x = ax; y = ay; }
	void Name() {
		gotoxy(x, y); puts("2�� MiniProject 000000����");
	}
	void End() {
		gotoxy(x, y); printf("esc : ��������");
	}
	void mainguide() {
		gotoxy(x, y); puts("S: ���� ��ŸƮ");
		gotoxy(x, y + 1); puts("G: ���� ���̵�");
		gotoxy(x, y + 2); puts("T: ���� ���ھ�");

	}

};

class Guide : Stage
{
private:
	int x, y;
public:
	Guide(int ax, int ay) { x = ax; y = ay; }
	void GuideControl() {
		gotoxy(x, y); printf("<x> : ������ �̷����ϴ� 1����Ʈ�� �ݴϴ�.");
		gotoxy(x, y+1); printf("<o> : �Ʊ��� �̷����ϴ�.");
		gotoxy(x, y + 2); printf("<H> : ��Ʈ�� ä���ݴϴ�.");
		gotoxy(x, y + 3); printf("<B> : ȭ�鿡 �ִ� ���� ���ֹ����ϴ�.");
		gotoxy(x, y + 4); printf("<P> : ���ݷ��� ��½�ŵ�ϴ�.");
	}

};

class inGame : Stage
{
private:
	int x, y;
public:
	inGame(int ax, int ay) { x = ax; y = ay; }
	void life() {
		gotoxy(x, y); printf("Life : ", ); //��Ʈ asc�ڵ� Ȯ���ϰ� �ش� �κ� �Ʊ���ü ���ؽ� ��� ���� �ʿ�

	}
	void score() {
		gotoxy(x, y); printf("score: %d", ); // ���� �״� ���� ���� �� �߰� �ʿ�
	}
	void ReturnScreen() {
		gotoxy(x, y); printf("R: ����ȭ��");

	}
};