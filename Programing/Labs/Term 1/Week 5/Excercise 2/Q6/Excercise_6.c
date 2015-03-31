#include <stdio.h>
#include <Windows.h>
#include<conio.h>

void main() 
{
/* This program will read a single numeral from a keyboard and display its value as a word*/
     
    int user_num;
    
    
    printf("Please enter a single number using a numeral from the keyboard \n");
    scanf("%d", &user_num);
    
    
    if (user_num == 0)
    {
        printf("Zero \n");
    }
    
    else if (user_num == 1)
    {
        printf("One \n");
    }
    else if (user_num == 2)
    {
        printf("Two \n");
    }
    else if (user_num == 3)
    {
        printf("Three \n");
    }
    else if (user_num == 4)
    {
        printf("Four \n");
    }
    else if (user_num == 5)
    {
        printf("Five \n");
    }
    else if (user_num == 6)
    {
        printf("Six \n");
    }
    else if (user_num == 7)
    {
        printf("Seven \n");
    }
    else if (user_num == 8)
    {
        printf("Eight \n");
    }
    else if (user_num == 9)
    {
        printf("Nine \n");
    }
    else
    {
        printf("Wrong input");
    }
    
 
    Sleep(10000);
}//end main    
     
    
         