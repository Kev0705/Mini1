#include "Main.h"

void StartScreen::logo() {
	gotoxy(80, 15);
	printf("\n");
	printf("          #      #      #       #         #####           #         #####       #####  \n");
	printf("          #     # #     #      # #        #    #         # #          #         #    # \n");
	printf("           #   #   #   #      # # #       #####         # # #         #         #####  \n");
	printf("            # #     # #      #     #      #    #       #     #        #         #    #   \n");
	printf("             #       #      #       #     #     #     #       #     #####       #    #  \n");
	 
};

void StartScreen::cursor()
{
	//puts("▶");
};

void StartScreen::menu() {

	gotoxy(60, 30);
	printf("게임 시작");
	gotoxy(60, 32);
	printf("스코어");
	gotoxy(60, 34);
	printf("게임 종료");
};