#include <stdio.h>
#include <windows.h>
main()
{
/* This program will ask the user to enter an integer between 1 and 100, check
     whether the integer is even or odd and print a message on the screen stating "Number
     x is Even" or "Number y is Odd". */
    
    int m;
    m = 0;
    
    
    printf("Please input a number between 1 and 100 \n");
    scanf("%d", &m);
    
    
    if (m % 2)
    {
        printf("Number %d is odd\n", m);
    }
    
    else 
    {
        printf("Number %d is even\n", m);
    }
  

 Sleep(10);
    
     return 0; 
    
}//end main     
         