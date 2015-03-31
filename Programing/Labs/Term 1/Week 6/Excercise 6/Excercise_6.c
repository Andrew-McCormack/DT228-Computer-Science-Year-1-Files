#include <stdio.h>
#include <windows.h>
main()
{
    /* This program will find the sum of all the odd numbers in the range 1 - 99 */
    
    
    int odd_numbers, counter, sum;
    
    
    odd_numbers = 1;
    counter = 0;
    sum = 0;
  
    while (odd_numbers < 101)
    {
        if (odd_numbers % 2 != 0)
        {
            if (counter == 20)
            {
                printf("\n");
            }
            
            else if (counter == 39)
            {
                printf("\n");
            }
            
            printf("%d,", odd_numbers);
            odd_numbers++;
            counter++;
            sum = sum + odd_numbers;
        }
        
    
        else
        {
            odd_numbers++;
            continue;
        }
    }//end while loop

    
    printf("\n \n The sum of all the odd numbers from \n [1] - [100] is: %d", sum);
    

    Sleep(10000);
}//end main()
    
    
