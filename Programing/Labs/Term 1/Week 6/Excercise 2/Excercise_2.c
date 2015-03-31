#include <stdio.h>
#include <windows.h>
main()
{
    /* This program will  ask the user to input a positive integer  value and -if it's even it will halve it-, -if
              it's odd, multiply by 3 and add 1-, Repeating this process until the value is 1,  printing out 
              each value and finally, printing out how many of these operations you performed*/
    
    
    int input;
    int counter;
    
    
    input = 0;
    counter = 0;
   

    printf("Please input a positive integer\n");
    scanf("%d", &input);

    
    while (input < 1)
    {
        printf("Error, re-enter another number \n");
        scanf("%d", &input);
    }
    
  
    printf("Initial value is %d \n", input);
    
    
    while (input > 1)
  {
    
      
    if (input % 2)
    {
        input = input * 3;
        input++;
        printf("Next value is %d \n", input);
        counter++;
    }
    
    else 
    {
        input = input / 2;
        printf("Next value is %d \n", input);
        counter++;
    }
  } //end while loop

  printf("Operation performed %d times \n", counter);
  
    Sleep(10000);
}//end main()
    
    
