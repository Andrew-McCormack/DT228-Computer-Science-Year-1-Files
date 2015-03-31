# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 4/2/14
     Program: Excercise 2
     Details: This program will use a function declared as 2parameters() to print a user defined number of a character. 
                   Both the user defined number and the character itself will be coppied from main() to the function. First the user enters
                  the character and number of said characters they want, then the 2parameters() function is called and the int and char are
                  copied into variables in the 2parameters() function, then , a for loop which will continuously print the char until i is less
                  the user defined, copied number. The program will then return to main and terminate*/

void twoparameters(int, char);
//The 2parameters function is initialised
void main()
{
    int num_cha;
    char user_cha;
    
    printf("Please input the number of times you would like the aforementioned character to be displayed \n");
    scanf("%d", &num_cha);

    printf("Please input the character you would like displayed \n");
    scanf(" %c", &user_cha);
    
    //2parameters() function is called
    twoparameters(num_cha, user_cha);
    //2parameters function terminates
    printf("Finished 2parameters function");
    Sleep(15000);
}//end main()
//2parameters() function begins
void twoparameters(int new_icopy, char new_ccopy)
{
    int i;
    for(i = 0; i < new_icopy; i++)
    {
        printf("%c", new_ccopy);//While i < new_icopy, new_ccopy will be repeatedly printed
    }
    printf("\n");
}//end 2parameters() function