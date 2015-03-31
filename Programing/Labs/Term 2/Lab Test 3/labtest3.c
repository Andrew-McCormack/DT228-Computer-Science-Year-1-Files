# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
/* Author: Andrew Mc Cormack
     Date: 25/2/14
     Program: Lab Test 3
     Details: This program allows the user to input 5 temperatures in Celcius into an array, copies the array into convert_temp() then displays them, then converts them to fahrenheit and displays them, finds the averagwe
                  in celcius and brings this back into main and displays it, then bings the average temp into in_Kelvin and converts it into Kelvin then displays that number in main by displaying its pointer address*/

float * convert_temp(float[]);
void in_Kelvin(float*);
//The sum() function is initialised
void main()
{
    float Degrees_Array[SIZE];
    float *Answer;
    int i;
    
    printf("Please input your 5 temperatures in degrees celcius: \n");
    
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &Degrees_Array[i]);
    }
    
    
    Answer = convert_temp(Degrees_Array);
    
    
    printf("The average of the  numbers in degress celcius is %f", Answer);
    
    
    in_Kelvin(&Answer);
    
    
    printf("The average temperature in Kelvin is %f", Answer);


    Sleep(15000);
}//end main()


float * convert_temp(float Degree_Array_Copy[SIZE])
{
    float total = 0;
    float *average;
    int i;
    
    
    for(i = 0; i < SIZE; i++)
    {
        total = total + Degree_Array_Copy[i] ;
    }
    
    *average = total / 5;
    
    printf("The 5 temperatures in degress celcius are: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%f,", Degree_Array_Copy[i]);
    }


    for(i = 0; i < SIZE; i++)
    {
        Degree_Array_Copy[i] = ((Degree_Array_Copy[i] * 9) / 5) + 32;
    }

    
    
    printf("\n The 5 temperatures in degrees fahrenheit are: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%f,", Degree_Array_Copy[i]);
    }
        
    return(average);
}//end sum() function


void in_Kelvin (float* Answer)
{
    *Answer = *Answer + 273;
}

