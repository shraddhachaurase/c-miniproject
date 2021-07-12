#include"fun.h"
/**
 * @brief 
 * 
 */
void startgame()
{       int score=0,level=1,mode=100,count=0;
	clock_t begin;int time_spent,speed;

	int r,letter,ch;
	int x=1;//used for x cursor co-ordinate
    #define pos gotoxy(33,x++) /*for cursor movement*/
	#define ln  printf(".......................");
	int t=30;
    int c=0;
    rectangle(0,0,70,15);
	delay(500);

	system("cls");
	srand(time(NULL)) ; //initilizes random function and seed with time
	x=2;
	pos;
	setcolor(12);
	printf("#select the Mode#");pos;
	ln
	pos;
	printf("1.Easy mode#");
	pos;
	printf("2.Normal mode#");
	pos;
	printf("3.hard mood#");
	pos;
	printf("4.Back to main menu#");
	pos;
	scanf("%d",&level);
	if(level==4)
	 return main();

	else

	{     if(level==1)    //boundary addition for lowercase alphabet
	       mode=65;
	     if(level==2)    //boundary addition for uppercase
		mode=97;
	     if(level==3)    //condition for mixed case
		mode=120;
		begin=clock();
		while(1)
		{       system("cls");
			time_spent=(int)(clock()-begin)/CLOCKS_PER_SEC;

			if(time_spent>=t)
			break;
			r=rand()%1000;
			r=r%26+mode;
			gotoxy(20,8);
			printf("....Type the following character....");
			gotoxy(36,11) ;
			printf(" %c",r); //prints random character

			letter=getch();

			if(letter!=r)
			break;
			else
			{       count++;
				score=score+10;
				gotoxy(28,9);
				printf("score=%d",score);//prints score
				gotoxy(37,9);
				printf("time_spent=%d sec",time_spent);//prints time spent during game

				if(level==1)
				delay(400);
				if(level==2)
				delay(200);
				if(level==3)
				delay(100);

			} //end of else
		}//end of while
		gotoxy(26,x);

		delay(400);

		setcolor(5); //blue text color
		++x;
		pos;
		speed=(count*60)/time_spent ;
	       //	symbol=2;
		if(time_spent<t-1)
		printf("Game Over!");
		else
		{       setcolor(11);
			printf("Times up !Game over!");
			pos;
			setcolor(5);
			if((speed>=40)&&(speed<=50))
			{	printf("Good Work !Keep it up!");pos;

				printf("You got silver medal");
			}
			else
			if(speed>50)
			{
				printf("Nice work! You got Gold medal");
			}
			else
			printf("Sorry no medal !you need practise..");
		}
		pos;
		printf("Total score is ::%d",score);
		pos;

		printf("Your net speed=%d letter per minute",speed);

		getscore(score,speed,level);//saves data to file
		++x;
		pos;
		printf("1.play again");
		pos;

		printf("2.main menu");pos;
		printf("3.exit"); pos;
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		      case 1:startgame();break;//recursive call
		      case 2:main();break;
		      case 3:system("cls");gotoxy(17,10);printf("This Game is created by Shivani Yadawar#");delay(1000);exit(1);
		      default:pos;printf("wrong choice!");pos;
				main();
		}

	}

}