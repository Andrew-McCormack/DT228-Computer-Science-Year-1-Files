#include <stdio.h>
#include <windows.h>
main()
{
    /* This program will  count from one to ten, print the values on a separate line for each, and print a message stating "This number is three" and "This number is seven"
              when the count is 3 and when the count is 7 respectively*/
    
    
    int numberline;
    
    
    numberline = 1;
  
    while (numberline < 11)
    {
        if (numberline == 3)
        {
            printf("This number is %d \n", numberline);
            numberline ++;
        }
        
        else if (numberline == 7)
        {
            printf("This number is %d \n", numberline);
            numberline ++;
        }
        
        else
        {
            printf("%d \n", numberline);
            numberline ++;
        }
        
    }//end while loop
  

    Sleep(10000);
}//end main()
    
    
