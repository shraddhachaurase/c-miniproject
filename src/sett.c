#include"fun.h"
/**
 * @brief 
 * 
 */
int x=1;//used for x cursor co-ordinate
#define pos gotoxy(33,x++) /*for cursor movement*/
#define ln  printf(".......................");
void sett()  //set time limit
{
	int ch;
	time_t t;
	system("cls");
	//rectangle(0,0,70,15);
	setcolor(11);
	x=5;
	pos;
	printf("Set the time limit for game in minute::");
	pos;
	ln
	pos;
	printf("press 0 for half minute") ;pos;
	printf("press 1 for 1 minute"); pos;
	printf("press 2 for 2 minute");pos;
	scanf("%d",&ch);
	switch(ch)
	{
		case 0:t=30;break;
		case 1:t=60;break;
		case 2:t=120;break;
		default:main();
	}
}