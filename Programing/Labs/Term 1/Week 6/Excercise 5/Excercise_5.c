#include <stdio.h>
#include <windows.h>
main()
{
    /* This program will print out all the even numbers from 1 - 100, separated by commas */
    
    
    int even_numbers, counter;
    
    
    even_numbers = 1;
    counter = 0;
  
    while (even_numbers < 101)
    {
        if (even_numbers % 2 == 0)
        {
            if (counter == 20)
            {
                printf("\n");
            }
            
            else if (counter == 39)
            {
                printf("\n");
            }
            
            printf("%d,", even_numbers);
            even_numbers++;
            counter++;
        }
        
    
        else
        {
            even_numbers++;
            continue;
        }
    }//end while loop
  

    Sleep(10000);
}//end main()
    
    
