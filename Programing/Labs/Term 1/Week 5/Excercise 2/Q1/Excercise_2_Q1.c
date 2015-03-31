#include <stdio.h>
main()
{
/* This program contains if else statements for indicating marriage status rewritten to switch statements*/
     
     char status;
    
    
    printf("Please enter your marriage status using the characters S for Single, \n M for Married, W for Widowed, E for separated or D for divorced \n");
    scanf("%1s" , &status);

switch (status)
    {
        
        case 'S':
        case 's':
        {
            printf("Single \n");
            break;
        }
        
        case 'M':
        case 'm':    
        {
            printf("Married \n");
            break;
        }
        
        case 'W':
        case 'w':    
        {
            printf("Widowed \n");
            break;
        }
        
        case 'E':
        case 'e':   
        {
            printf("Separated \n");
            break;
        }
        
        case 'D':
        case 'd':    
        {
            printf("Divorced \n");
            break;
        }
        
        default:
        {
            printf("Error: invalid code \n");
            break;
        }//end default
        
    }//end switch
    
    
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}//end main
            
     
    
         