#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 5
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will define an integer array with 5 elements, read in 5 values into the array, define another integer array with 5 elements and copy the values from the 1st
              array into the second array in reverse order (e.g. the number in the first element of the 1st array will be in the last element in the 2nd array, etc..)
 */
    
        
    int numbers[SIZE] = {0};
    int copy[SIZE] = {0};
    int i;
    
    
    printf("Please enter 5 numbers into the array \n");
    
    
    for(i = 0; i < SIZE; i++)//First Loop, takes in user input for numbers array untill i < SIZE, thereby completing the array
    {
        scanf("%d", &numbers[i]);
    }
    
    
    printf("\n The numbers displayed in the copy of the array are: ");
    
    
    for(i = 0; i < SIZE; i++)//Second Loop, copies the user input from numbers array into copy array and display each one until i < Size, thereby copying all of the user input from number array
    {
        copy[i] = numbers[i];
        copy[i] = numbers[(SIZE - i) - 1]; 
        printf("%d, ", copy[i]);
    }
    
    
    Sleep(15000);
    
    
    
    
}//end main()
    
    
