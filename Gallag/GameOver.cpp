#include "GameOver.h"

void GameOver::scoreSave(const char* dir, int &score) {
	std::ofstream  fout(dir, std::ios::app);
	fout << score << std::endl;
	fout.close();
}

void GameOver::showLogo() {
	gotoxy(70, 25);
	printf("-----------game over-----------");
}

void GameOver::showScore(const char* dir, int& score)
{
	std::ifstream fin(dir);
	char Text[100] = { 0, };
	int TextSort[100];
	int length = 0;
	int score_index;
	while (fin.getline(Text, sizeof(Text))) {
		TextSort[length] = atoi(Text);
		length++;
	}

	std::sort(TextSort, TextSort + length, std::greater<int>());

	for (int i = 0;i < length;i++) {
		if (TextSort[i] == score) {
			score_index = i;
		}
	}

	for (int i = 0;i < length;i++) {
		gotoxy(x, y);
		std::cout << i + 1 << ". " << TextSort[i];
		if (i == score_index) {
			std::cout << "<< now!";
		}
		y += 1;
	}

	fin.close();


};
