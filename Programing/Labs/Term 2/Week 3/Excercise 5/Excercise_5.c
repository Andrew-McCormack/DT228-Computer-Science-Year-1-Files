# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 5
     Details: This program will use a function declared as pass_value() to pass data by its value from main() into the function. The program will first initialise a variable to 1 in main() and print its value.
                  The variable will then move into the pass_value() function by means of pass by value and will then increment this data by 2 and print this value. The function then ends and the data is passed
                  back into main(). The variable's data will then be printed again to see if it has changed */
                

int pass_value(int);
//The highest_number() function is initialised
void main()
{
    int value = 1;
    
    printf("The initial value of the variable is %d \n", value);
   
    // pass_value() function is called
    value = pass_value(value);
    //pass_value function terminates
    
    printf("The new value of the variable is %d \n", value);
 
    Sleep(15000);
}//end main()

// starts pass_value function 
int pass_value(int value_copy)
{
    value_copy = value_copy + 2;
    
    printf("The passed by value (inside the pass_value() function) \n value of the variable is %d \n" , value_copy);
    
    return(value_copy);

    
}//end pass_value() function


