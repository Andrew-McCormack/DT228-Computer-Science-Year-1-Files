# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 4
     Details: This program will use a function declared as common_character to find the most recurring of three chars. 
                  The three chars will be coppied from main() to the common_character()
                  function and the most recurring of these will be found. The most recurring char will the be returned to main() and displayed*/

char common_character(char, char, char);
//The highest_number() function is initialised
void main()
{
    char pick1, pick2, pick3, result;
    
    printf("Please input the your three character followed by the 'a' key \n");
    scanf("%c ", &pick1);

    scanf("%c ", &pick2);
    
    printf("\n");
    scanf("%c ", &pick3);
    
    printf("\n %c, %c, %c", pick1, pick2, pick3);
    
    //common_character() function is called
    result = common_character(pick1,pick2, pick3);
    //common_character() function terminates
    
    if(result == 'N')
    {
        printf("None of the characters entered are recurring");
    }
    
    else
    {
        printf("The most commonly recurring of the three characters is: %c", result);
    }
    Sleep(15000);
}//end main()


char common_character(char pick1_copy, char pick2_copy, char pick3_copy)
{ 
    if (pick1_copy == pick2_copy)
    {
        return(pick1_copy);
    }
    else if (pick1_copy  == pick3_copy)
    {
        return(pick1_copy);
    }
    
    else if (pick2_copy == pick3_copy)
    {
        return(pick2_copy);
    }
    
    else
    {
        return('N');
    }
    
            
 
    
    printf("Finished common_character() function \n");
        
}//end ) function

