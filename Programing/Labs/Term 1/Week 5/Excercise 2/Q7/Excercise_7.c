#include <stdio.h>
#include <Windows.h>
#include<conio.h>

void main() 
{
/* This program will read a single numeral from a keyboard and display its value as a word*/
     
    int day_num;
    
    
    printf("Please enter a single number from 1 to 7 using a numeral from the keyboard to specify the day of the week, 1 being Sunday \n");
    scanf("%d", &day_num);
    
    

    if (day_num == 1)
    {
        printf("Sunday \n");
    }
    else if (day_num == 2)
    {
        printf("Monday \n");
    }
    else if (day_num == 3)
    {
        printf("Tuesday \n");
    }
    else if (day_num == 4)
    {
        printf("Wednesday \n");
    }
    else if (day_num == 5)
    {
        printf("Thursday \n");
    }
    else if (day_num == 6)
    {
        printf("Friday \n");
    }
    else if (day_num == 7)
    {
        printf("Saterday \n");
    }
    else
    {
        printf("Wrong input, please wait for program to close and try again");
        getchar();
    }
    
 
    Sleep(10000);
}//end main    
     
    
         