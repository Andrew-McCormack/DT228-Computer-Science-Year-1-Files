#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 3
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will use an array to allow the user to input 3 temperature readings in Fahrenheit.  After all the temperatures have
              been read from the keyboard, it will display each of these temperatures on the screen and its corresponding temperature in Celsius. */
    
        
    int fahrenheit[SIZE] = {0};
    int celcius[SIZE] = {0};
    int i;
    
    
    printf("Please enter 3 temperatures in Degrees Fahrenheit \n");
    
    
    for(i = 0; i < SIZE; i++)//First Loop, takes in user input for temperatures in fahrenheit untill i < SIZE, thereby completing the array
    {
        scanf("%d", &fahrenheit[i]);
    }
    
    
    printf("\n The temperatures you entered in Degrees Farenheit are: \n");
      
    
    for(i = 0; i < SIZE; i++)
    {
        printf("\n %d degrees fahrenheit \n", fahrenheit[i]);
    }
    
    
    printf("\n The temperatures you entered in Degrees Celcius are: \n");
    
    
    for(i = 0; i < SIZE; i++)//Second Loop, copies the user input from fahrenheit array into celcius array perform the necessary operations to conver them and display each one until i < Size, thereby copying all of the user input from number array
    {
        celcius[i] = (fahrenheit[i] - 32) * 5 / 9;
        
        printf("\n %d degrees celcius\n", celcius[i]); 
    }
    
    
    Sleep(15000);
    
    
    
    
}//end main()
    
    
