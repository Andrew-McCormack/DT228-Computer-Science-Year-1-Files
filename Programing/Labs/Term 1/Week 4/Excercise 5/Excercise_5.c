#include <stdio.h>
#include <windows.h>
main ()
{
/*This program will ask the user to enter and display  2 characters on 
    separate lines and display these on screen using the get and put char() commands*/
    
    char choice1, choice2;
    
    
    printf("Enter any two characters \n");
    choice1 = getchar();
    choice2 = getchar();
    printf("Entered  ");
    putchar(choice1);
    putchar(choice2);
    
    
   Sleep(10);
   getchar();
   getchar();
   getchar();
   getchar();
   getchar();
      
}//End Main