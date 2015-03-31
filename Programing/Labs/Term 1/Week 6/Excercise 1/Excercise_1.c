#include <stdio.h>
#include <Windows.h>
#include<conio.h>

void main() 
{
/* This program will use a while loop to print out the numbers 1-10 in descending
     order on the same line and each number is separated by a comma (e.g.
     1,2,3,4,5,6,7,8,9,10)*/
     
    int numberline;
    numberline = 10;
    
    while (numberline > 0)
    {
        printf("%d,", numberline);
        numberline--;
        if (numberline == 1)
            printf("%d", numberline);
        else
            printf("%d,", numberline);
            numberline--;
    }
    Sleep(10000);
}//end main    
     
    
         