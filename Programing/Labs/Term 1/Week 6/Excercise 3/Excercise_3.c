#include <stdio.h>
#include <windows.h>
main()
{
    /* This program will  ask the user to enter a number between 1-5. The program
             should display all the numbers between 1-20 that are evenly divisible by this
             number.*/
    
    
    int input;
    
    
    input = 0;
  
    
    printf("Please input a number between 1 and 5 \n");
    scanf("%d", &input);

    while (input > 5)
    {
        printf("Wrong number, please input a number between 1 and 5 \n");
        scanf("%d", &input);
    }
    

    while (input < 1)
    {
        printf("Wrong number, please input a number between 1 and 5 \n");
        scanf("%d", &input);
    }

    
    printf("Entered %d \n", input);
    
    
    
    
    if (input == 1)
    {
        while (input < 20)
        {
        printf("%d,", input);
        input++;
        }
    }
    
    else if (input == 2)
    {
        while (input < 20)
        {
        printf("%d,", input);
        input = input + 2;
        }
    }
    
    else if (input == 3)
    {
        while (input < 20)
        {
        printf("%d,", input);
        input = input + 3;
        }
    }
  
    else if (input == 4)
    {
        while (input < 20)
        {
        printf("%d,", input);
        input = input + 4;
        }
    }
    
    else if (input == 5)
    {
        while (input < 20)
        {
        printf("%d,", input);
        input = input + 5;
        }
    }

  

    Sleep(10000);
}//end main()
    
    
