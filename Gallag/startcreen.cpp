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
	//puts("��");
};

void StartScreen::menu() {

	gotoxy(60, 30);
	printf("���� ����");
	gotoxy(60, 32);
	printf("���ھ�");
	gotoxy(60, 34);
	printf("���� ����");
};