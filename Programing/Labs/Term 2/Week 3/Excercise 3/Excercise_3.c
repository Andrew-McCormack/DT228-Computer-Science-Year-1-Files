# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 2
     Details: This program will use a function declared as highest_number to find the  biggest of three inputted numbers. 
                  The three number will be coppied from main() to the highest_number() function and the biggest these numbers will be found. The biggest number will the be returned to main() and displayed*/

float highest_number(float, float, float);
//The highest_number() function is initialised
void main()
{
    float num1, num2, num3, result = 0;
    
    printf("Please input the first number \n");
    scanf("%f", &num1);

    printf("Please input the second number \n");
    scanf("%f", &num2);
    
    printf("Please input the third number \n");
    scanf("%f", &num3);
    
    //highest() function is called
    result = highest_number(num1, num2, num3);
    //highest() function terminates
    printf("The biggest of the three numbers is: %f", result);
    Sleep(15000);
}//end main()


float highest_number(float num1_copy, float num2_copy, float num3_copy)
{
    if (num1_copy > num2_copy)
    {
        if (num1_copy > num3_copy)
        {
            return(num1_copy);
        }
        else 
        {
            return(num3_copy);
        }
    }
    
    else if (num2_copy > num3_copy)
    {
        return(num2_copy);
    }
    
    else
    {
        return(num3_copy);
    }
            
 
    
    printf("Finished average() function \n");
        
}//end ) function

