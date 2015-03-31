# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 6
     Details: This program will use a function declared as pass_reference() to pass data by its value from main() into the function. The program will first initialise a variable to 1 in main() and print its value.
                  The variable will then move into the pass_reference() function by means of pass by reference and will then increment this data by 2 and print this value. The function then ends and the data is passed
                  back into main(). The variable's data will then be printed again to see if it has changed */
                

void pass_reference(int*);
//The highest_number() function is initialised
void main()
{
    int value = 1;
    
    printf("The initial value of the variable is %d \n", value);
   
    // pass_reference() function is called
    pass_reference(&value);
    //pass_reference function terminates
    
    printf("The new value of the variable is %d \n", value);
 
    Sleep(15000);
}//end main()

// starts pass_reference function 
void pass_reference(int* formal_value)
{
    *formal_value = *formal_value + 2;
    
    printf("The passed by reference (inside the pass_reference() function) \n value of the variable is %d \n" , *formal_value);

    
}//end pass_reference() function


