#ifndef __FUN_H
#define __FUN_H
/**
 * @file fun.h
 * @author shivani (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>



void scorecard();
void getscore(int,int,int);
void About_me();
void help();
void sett();
void startgame();
void rectangle(int x,int y,int l,int b);
void setcolor(int ForgC);
void delay(unsigned int mseconds);
void gotoxy(int x,int y);

typedef enum check
{
    SUCCESS,
    
} check;
#endif
