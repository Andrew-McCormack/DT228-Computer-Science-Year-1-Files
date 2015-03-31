#include <stdio.h>
#include <conio.h>
#include <dos.h>
main()
{
    /*This program will  print floats at specific decimal places*/
   
    
    float v1, v2, v3;
    
    
    v1 = 5;
    v2 = -4.5;
    v3 = 11.25;
    
    
    printf("v1 = %.0f, v2 = %.1f, v3 = %.2f", v1, v2, v3); 
    
     sleep(10);
    
}