#include"fun.h"
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>

int x=1;//used for x cursor co-ordinate
#define pos gotoxy(33,x++) /*for cursor movement*/
#define ln  printf(".......................");

//................................................................................................................................................................................
//			main function
int main()
{       int ch;
        int c=0;
    char name[15];
	time_t t;
	time(&t);
//	rectangle(0,0,70,15);
	x=1;
	system("cls");
	pos;
	setcolor(12) ;
	printf("welcome to Typing game ");
	setcolor(10) ;
	pos;
	printf("%s",ctime(&t));
	pos;
    ln pos;
	if(c==0)
	   {	printf("Enter player's name:");
		gets(name);
	   }
	   c++;
	pos;ln pos;
		printf("#..MAIN MENU..#");pos;
		ln
		pos;
		printf("1.startgame");
		pos;
		printf("2.scorecard");
		pos;
		printf("3.Set the time limit::");
		pos;
		printf("4.Help\n");
		pos;
		printf("5.About me\n");
		pos;
		printf("0.exit\n");
		pos;
		printf("Enter your choice::");
		scanf("%d",&ch);
		pos;
		switch(ch)
		{       case 1:startgame();break;
			case 2:scorecard();break;
			case 3:sett();main();
			case 4:help();break;
			case 5:About_me();break;
			case 0:system("cls");gotoxy(17,10);printf("#This Game is created by Shivani#");delay(1000);exit(1);
			default:main();
		}

getch();
}

