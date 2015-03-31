#include <stdio.h>
#include <conio.h>
#include <dos.h>
main()
{
/* This program will ask the user to enter four numbers and display them in reverse order. */
    
    
    float number1;
    float number2;
    float number3;
    float number4;   

    number1 = 0;
    number2 = 0;
    number3 = 0;
    number4 = 0;
    
    
    printf("Please input any four numbers \n");
    scanf("%f %f %f %f", &number1, &number2, &number3, &number4);
    
    
    printf("%.2f %.2f %.2f %.2f \n", number4,number3,number2,number1);

    sleep(10);
    
 
}//end main     
         