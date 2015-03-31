# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
/* Author: Andrew Mc Cormack
     Date: 18/2/14
     Program: Excercise 4
     Details: This program will pass an array to a function containing 5 numbers and check each number if it is even or odd. The function will then display each number and whether it is even or odd. It then Calculates the total number of even
     numbers and returns this number to  main() and displays it. */
                

//Odd_Even_Array() prototype declared
int Odd_Even_Array(int[]);
void main()
{
    int values[(SIZE)];
    int i, Num_Even = 0;
    
    printf("Please enter your 5 numbers \n");
    
    
    for(i = 0; i < SIZE; i++)
    {
    scanf("%d", &values[i]);
    }
    
    printf("Leaving main(), entering Odd/Even_Array() \n");
    //Odd_Even_Array() function is called
    Num_Even = Odd_Even_Array(values);
    //Odd_Even_Array()  function terminates
    printf("Returned to main() \n");
   
    printf("The number of even numbers of the values you entered are %d: \n", Num_Even);
    
    Sleep(15000);
}//end main()

//Odd_Even__Array() Implementation
int Odd_Even_Array(int values_Copy[SIZE])
{
    int i, even, odd = 0;
    
        
    for(i = 0; i < SIZE; i++)
    {
        if(values_Copy[i] % 2 != 0)
        {
            printf("values_Copy[%d] is odd \n ", i);
            odd++;
        }
        
        else
        {
            printf("values_Copy[%d] is even \n", i);
            even++;
        }
    }
    
    return(even);
    
        
}//End Odd_Even_Array()




