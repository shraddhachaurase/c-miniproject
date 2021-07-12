#include"fun.h"
/**
 * @brief 
 * 
 * @param score 
 * @param speed 
 * @param level 
 * @param pos 
 * @param name 
 */


#define pos gotoxy(33,1) /*for cursor movement*/
#define ln  printf(".......................");
char name;
void getscore(int score,int speed,int level)
{
	FILE *fp;
	fp=fopen("file.txt","a");
	pos;
	if(fp==NULL)
	printf("error in opening file");
	fprintf(fp,"\nname=%s   score=%d    speed=%d    level=%d",name,score,speed,level);
	fclose(fp);
	pos;
	printf("scorecard updated");
}