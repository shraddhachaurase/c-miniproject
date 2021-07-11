#include"fun.h" 
/**
 * @brief 
 * 
 * @param x 
 * @param y 
 */
COORD coord={0,0};
void gotoxy(int x,int y)//function to set the cursor position
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}