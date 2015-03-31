#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 5
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will using an array that will allow the user to input 3 temperature readings in Fahrenheit.  After all the temperatures have
              been read from the keyboard, display each of these temperatures on the screen and its corresponding temperature in Celsius. */
    
        
    int numbers[SIZE] = {0};
    int copy[SIZE] = {0};
    int i;
    
    
    printf("Please enter 5 numbers into the array \n");
    
    
    for(i = 0; i < SIZE; i++)//First Loop, takes in user input for numbers array untill i < SIZE, thereby completing the array
    {
        scanf("%d", &numbers[i]);
    }
    
    
    printf("\n The numbers displayed in the copy of the array are: \n");
    
    
    for(i = 0; i < SIZE; i++)//Second Loop, copies the user input from numbers array into copy array and display each one until i < Size, thereby copying all of the user input from number array
    {
        copy[i] = numbers[i];
        printf("\n %d \n", copy[i]); 
    }
    
    
    Sleep(10000);
    
    
    
    
}//end main()
    
    
