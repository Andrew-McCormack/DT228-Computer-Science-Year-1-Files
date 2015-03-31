# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 4/2/14
     Program: Excercise 1
     Details: This program will use a function declared as stars() to print 10  stars. First the stars() function is called, then , once inside
                  the function, a for loop which will continuously print * until i is less than NUMBER which has been defined as 10. The will
                  then return to main and terminate*/

void stars(void);//The stars function is initialised
void main()
{
    printf("Initialising star() function \n");
    //stars() function is called
    stars();
    //stars function terminates
    printf("Finished stars function");
    Sleep(15000);
}//end main()
//stars() function begins
void stars()
{
    int i;
    for(i = 0; i< NUMBER; i++ )
    {
        printf("*");//While i < NUMBER, * will be repeatedly printed
    }
    printf("\n");
}//end stars() function