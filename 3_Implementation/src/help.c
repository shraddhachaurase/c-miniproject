#include"fun.h"
/**
 * @brief 
 * 
 */
void help()
{
	system("cls");
	//rectangle(0,0,70,15);
	gotoxy(7,5);
	setcolor(6);

	printf(".....Rules of the Game.....");gotoxy(7,6);
	printf("->Enter your name as player name.");gotoxy(7,7);
	printf("->Set the time limit under option 3 in main menu(default limit is 30 sec)");gotoxy(7,8);
	printf("->select the level and get started");gotoxy(7,9);
	printf("->Characters are displayed and you have to type them as fast as you can.");gotoxy(7,10);
	printf("->Avoid incorrect typing otherwise game will be over.");
	getch();
}