# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 1
     Details: This program will use a function declared as user_num() to check if a number is even or odd.
                  The user inputted number will be coppied from main() to the user_num() function and the function will check if it's even or odd, returning 1 if even or 0 if odd. The main() function will then
                  return the result*/
int user_num(int);
//The user_num() function prototype is initialised
void main()
{
    int number_input, result = 0;
    
    printf("Input your number: ");
    scanf("%d", &number_input);
    
    result = user_num(number_input);
    
    
    if (result == 1)
    {
    printf("The number is even");
    }

    else
    {
        printf("The number is odd");
    }

    Sleep(15000);
}//end main()


int user_num(int number_input_copy)
{
    if(number_input_copy % 2 == 0)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
    
}//end sum() function

