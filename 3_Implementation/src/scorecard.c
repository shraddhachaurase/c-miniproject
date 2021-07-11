#include"fun.h"
/**
 * @brief 
 * 
 */
void scorecard()
{       int ch;
	FILE *fp;
	system("cls");
	//rectangle(0,0,70,15);
	int x=3;

	printf("\t\t....The scores are...\n");

	fp=fopen("file.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{	printf("%c",ch);
	}
	getch();
	main();
}
