 #include"fun.h"
/**
 * @brief 
 * 
 * @param mseconds 
 */
void delay(unsigned int mseconds)//function for delay
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}