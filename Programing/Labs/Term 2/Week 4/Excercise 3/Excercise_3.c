# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
/* Author: Andrew Mc Cormack
     Date: 18/2/14
     Program: Excercise 3
     Details: This program will use a function to calculate the average of 5 numbers in an array. In the main(), it will ask the user to enter 5 numbers and store these in the array. It will then pass the
     array to a function and calculate the average of these 5 numbers. It will then return the average to main() and display this. */
                
//Average_Array() prototype declared
int Average_Array(int[]);
void main()
{
    int values[(SIZE- 1)];
    int i, Average = 0;
    
    printf("Please enter your 5 numbers \n");
    
    
    for(i = 0; i < SIZE; i++)
    {
    scanf("%d", &values[i]);
    }
    

    //Average_Array() function is called
    Average = Average_Array(values);
    //Average_Array()  function terminates
    

    printf("The average of these values is %d \n", Average);
 
    Sleep(15000);
}//end main()

//Average_Array() Implementation
int Average_Array(int values_Copy[])
{
    int i = 0;
    int Average2 = 0;
    
    
    for(i = 0; i < SIZE; i++)
    {
        Average2 += values_Copy[i];
    }
    
    Average2 = Average2 / SIZE;
    
    return(Average2);
        
}//Average_Array()




