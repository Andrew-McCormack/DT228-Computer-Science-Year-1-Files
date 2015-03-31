# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 11/2/14
     Program: Excercise 2
     Details: This program will use a function declared as average to add together three number and then find the average of the three numbers. 
                  The three number will be coppied from main() to the average() function and the sum of theses numbers will be found before finding the average of the three numbers.
                   The program will then return to the main() function and print the result and terminate*/

float average(float, float, float);
//The average() function is initialised
void main()
{
    float num1, num2, num3, result = 0;
    
    printf("Please input the first number \n");
    scanf("%f", &num1);

    printf("Please input the second number \n");
    scanf("%f", &num2);
    
    printf("Please input the third number \n");
    scanf("%f", &num3);
    
    //average() function is called
    result = average(num1, num2, num3);
    //average() function terminates
    printf("The average of the three numbers is: %f", result);
    Sleep(15000);
}//end main()


float average(float num1_copy, float num2_copy, float num3_copy)
{
    float total = 0; 
    float average = 0;
    
    total = num1_copy + num2_copy + num3_copy;
    
    average = total / 3;
    
    printf("Finished average() function \n");
    
    return(average);
        
}//end average() function

