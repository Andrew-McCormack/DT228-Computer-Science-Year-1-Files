# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 4/2/14
     Program: Excercise 3
     Details: This program will use a function declared as highlow() to print the biggest and smallest of three number. 
                  The three number will be coppied from main() to the function. First the user enters
                  the three numbers, then the highlow() function is called and the three numbers are
                  copied into variables in the highlow() function, then , the highest abd lowest number will be found through the use of
                  < and > if statements and printing the resulting high and low numbers. The program will then return to main and 
                  terminate*/

void highlow(int, int, int);
//The highlow() function is initialised
void main()
{
    int num1, num2, num3;
    
    printf("Please input the first number \n");
    scanf("%d", &num1);

    printf("Please input the second number \n");
    scanf("%d", &num2);
    
    printf("Please input the third number \n");
    scanf("%d", &num3);
    
    //highlow() function is called
    highlow(num1, num2, num3);
    //highlow() function terminates
    printf("Finished highlow() function");
    Sleep(15000);
}//end main()
//highlow() function begins
void highlow(int num1, int num2, int num3)
{
    if (num1 > num2)
        if (num1 > num3)
            printf("Number1: %d is highest \n", num1);
        else
            printf("Number3: %d is highest \n", num3);
    
    else if (num2 > num3)
        printf("Number2: %d is highest \n", num2);
    else
        printf("Number3: %d is highest \n", num3);
    
    if (num1 < num2)
        if (num1 < num3)
            printf("Number1: %d is lowest \n", num1);
        else
            printf("Number3: %d is lowest \n", num3);
    
    else if (num2 < num3)
        printf("Number2: %d is lowest \n", num2);
    else
        printf("Number3: %d is lowest \n", num3);
    
        
    printf("\n");
}//end 2parameters() function