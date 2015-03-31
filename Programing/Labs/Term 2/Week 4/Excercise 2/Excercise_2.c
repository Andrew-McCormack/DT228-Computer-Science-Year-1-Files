# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
/* Author: Andrew Mc Cormack
     Date: 18/2/14
     Program: Excercise 2
     Details: This program will use a function to find the highest number in a 1d array containing 5 numbers. In the main(), it will ask the user to enter 5 numbers and store these in the array. It will then
     pass the array to a function which will find the highest number. It will then return this number to main() and display it. */
                
//Highest_Num_Array() prototype declared
int Highest_Num_Array(int[]);
void main()
{
    int values[(SIZE- 1)];
    int i, Highest_Num = 0;
    
    printf("Please enter your 5 numbers \n");
    
    
    for(i = 0; i < SIZE; i++)
    {
    scanf("%d", &values[i]);
    }
    

    //Highest_Num_Array() function is called
    Highest_Num = Highest_Num_Array(values);
    //Highest_Num_Array()  function terminates
    

    printf("The highest number of the values is %d \n", Highest_Num);
 
    Sleep(15000);
}//end main()

//Highest_Num_Array() Implementation
int Highest_Num_Array(int values_Copy[])
{
    int i = 0;
    int Highest = 0;
    
    
    for(i = 0; i < SIZE; i++)
    {
        if(values_Copy[i] > Highest)
        {
            Highest = values_Copy[i];
        }
    }
    
    return(Highest);
        
}//End Highest_Num_Array()




