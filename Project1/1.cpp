#include <stdio.h>
#include <cursor.h>

class RandNum
{
private:
	int num;

public:
	RandNum() { randomize(); }
	void Generate() { num = random(100) + 1; }
	BOOL Compare(int input) {
		if (input == num) {
			printf("맞췄습니다\n");
			return TRUE;
		}
		else if (input < num)
		{
			printf("입력한 숫자보다 더 작습니다\n");
		}
		else
		{
			printf("입력한 숫자보다 더 큽니다\n");
		}
		return FALSE;
	}
};

class Ask
{
private:
	int input;

public:
	void Prompt() { printf("\n제가 만든 숫자를 맞춰보세요\n");}
	BOOL AskUser() {
		printf("숫자를 입력하세요(끝낼때는 999)\n", &input);
		scanf_s("%d", &input);
		if (input == 999) {
			return TRUE;
		}
		return FALSE;
		
	}
	int GetInput() { return input; }
};

int main_() {

	RandNum R;
	Ask A;

	for (;;) {
		R.Generate();
		A.Prompt();

		for (;;) {
			if (A.AskUser()) {
				exit(0);
			}
			if (R.Compare(A.GetInput())) {
				break;
			}
		}
	}
}