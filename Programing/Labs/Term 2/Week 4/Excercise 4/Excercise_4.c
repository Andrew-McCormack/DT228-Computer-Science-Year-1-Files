# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
/* Author: Andrew Mc Cormack
     Date: 18/2/14
     Program: Excercise 4
     Details: This program will use a function using pass by reference to pass a 1d array from main() containing 5 numbers. In the main(), it will ask the user to enter 5 numbers and store these in the array. It will then
     pass the array to a function where it will multiply each of the numbers by 2 . It will then return this array to main() and display it. */
                
//Highest_Num_Array() prototype declared
int Array(int[]);
void main()
{
    int values[(SIZE)];
    int i = 0;
    
    printf("Please enter your 5 numbers \n");
    
    
    for(i = 0; i < SIZE; i++)
    {
    scanf("%d", &values[i]);
    }
    
    printf("Leaving main(), entering Array()");
    //Array() function is called
     Array(values);
    //Array()  function terminates
    printf("Returned to main()");
    printf("The contents of values[] is: \n");
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d \n", values[i]);
    }
    /*Changes will be made to values[] array because arrays are allways passed by reference as they are addresses in memory themselves, i.e. pointers, So values_Copy[] contains the same addresses as values[] therefore the changes 
             made will stay when main() function returns.*/
 
    Sleep(15000);
}//end main()

//Highest_Num_Array() Implementation
int Array(int values_Copy[SIZE])
{
    int i = 0;
    
    
    for(i = 0; i < SIZE; i++)
    {
        values_Copy[i] = (values_Copy[i]) * 2;
    }
    
        
}//End Array()




