#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 5
main()
{
    /* This program uses a char array with 5 elements. It will ask the user to enter any
             5 characters of their choice into the array. It will then output the contents of the array to the screen and display each
             character*/
    
    
    char user_input[SIZE] = {0};
    
    
    int i;
    
    
    printf("Please input 5 characters \n");
    
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%c", &user_input[i]);
        /*Because the delimiter %c is being used, only three characters can be entered as the enter key will be pressed twice and it is also considered as a character by the program*/
    }
    
    
    printf("\n The characters you entered were: \n");
    
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%c", user_input[i]);
    }
    
    Sleep(15000);
}
    
    
        
    
    
    