#include <stdio.h>
#include "cursor.h"


int main(void)
{

	long x = 10;
	long y = 5;
	gotoxy(x, y)
		printf("<0>");

	x = 10;
	y = 6;

	showcursor(false);
	for (int i = 0; i < 21; i++) {

		gotoxy(x, y + i)
			printf(" |");
		delay(500);
		gotoxy(x, y + i);
		printf("  ");
	}
	return 0;
}