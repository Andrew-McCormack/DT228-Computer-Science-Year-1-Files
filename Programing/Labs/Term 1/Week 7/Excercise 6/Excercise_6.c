#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 3
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will define an integer array with 3 elements, read in 3 values into the array, and then using an outer an inner loop, sort the numbers entered from lowest to highest
 */
    
        
    int numbers[SIZE] = {0};
    int i, j, temp;
    
    
    printf("Please enter 3 numbers into the array \n");
    
    
    for(i = 0; i < SIZE; i++)//First Loop, takes in user input for numbers array untill i < SIZE, thereby completing the array
    {
        
        scanf("%d", &numbers[i]);
        
    }
    
    
    printf("\n The numbers displayed in the array in ascending order are: ");
    
    
    for(i = 0; i < SIZE; i++)//Second Loop, copies the user input from numbers array into copy array and display each one until i < Size, thereby copying all of the user input from number array
    {
        for(j = i; j < SIZE; j++)
        {  
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
                    
    printf("\n Sorted array:");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d,", numbers[i]);
    }
    
    
    
    
    Sleep(15000);
    
    
    
    
}//end main()
    
    
