# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 4/2/14
     Program: Excercise 4
     Details: This program will use a function declared as sum() to add together three number and then use a function declared as average
                  to find the average of the three numbers. 
                  The three number will be coppied from main() to the sum() function and the sum of theses numbers will then be copied to
                   the average() function. First the user enters the three numbers, then the sum() function is called and the three numbers are
                   copied into variables in the sum() function, then the three numbers will be added and the answer copied to average() function.
                   The average function will then use the copied sum answer to find the average of the three numbers.
                   The program will then return to the sum() function and then main and terminate*/

void sum(float, float, float);
//The sum() function is initialised
void main()
{
    float num1, num2, num3;
    
    printf("Please input the first number \n");
    scanf("%f", &num1);

    printf("Please input the second number \n");
    scanf("%f", &num2);
    
    printf("Please input the third number \n");
    scanf("%f", &num3);
    
    //sum() function is called
    sum(num1, num2, num3);
    //sum() function terminates
    printf("Finished sum() function");
    Sleep(15000);
}//end main()

//sum() function begins
void average(float);
//The average() function is initialised
void sum(float num1, float num2, float num3)
{
    float total = 0;
    total = num1 + num2 + num3;
    
    //average() function is called
    average(total);
    //average()function terminates
    printf("Finished average() function \n");
        
    printf("\n");
}//end sum() function

void average(float total)
{
    float average = 0;
    average = total / 3;
    
    printf("\n The average of the three numbers is %f \n", average);
}//end average() function