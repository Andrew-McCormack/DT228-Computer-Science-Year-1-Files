#include <stdio.h>
#include <windows.h>
main ()
{
/*This program will ask the user to enter 3 floats, displaying the first to 4 decimals, second 
    to 3, and third with no decimals on separate lines*/
    
    float choice1, choice2, choice3;
    
    
    printf("\nEnter three float numbers \n");
    scanf("%f",&choice1);
    printf("\n You entered %1.4f", choice1);
    
  
    scanf("%f",&choice2);
    printf("\n You entered %1.3f", choice2);
    
    
    scanf(" %f",&choice3);
    printf("\n You entered %1.0f", choice3);
    
  Sleep(20);
}//End Main