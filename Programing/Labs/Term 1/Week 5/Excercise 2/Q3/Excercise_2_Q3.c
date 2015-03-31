#include <stdio.h>
main()
{
/* This program will read in two integers and check if the first integer is evenly divisible by the second*/
     
    int num1, num2;
    num1 = 0;
    num2 = 0;
    
    
    
    printf("Please enter two any numbers \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int myoperator;
    myoperator = 0;
    
    myoperator = num1%num2;
    
    switch (myoperator)
    {
        case 0:
        {
            printf("The second number entered divides evenly into the first \n");
            break;
        }
        
        default:
        {
            printf("The second number entered does not divide evenly into the first \n");
            break;
        }//end default
    }//end switch
    
    getchar();
    getchar();
    getchar();
    getchar();
}//end main    
     
    
         