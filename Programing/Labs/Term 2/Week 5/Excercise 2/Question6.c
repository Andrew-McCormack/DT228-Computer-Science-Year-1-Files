# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //Program to read in name and display with spaces 
    
    char *name;
    printf("Enter your name \n");
    gets(name);
    
    printf("Your name is ");
    while (*name)
    {
        putchar(*name++);
        printf(" ");
    }
    
    
    
    Sleep(150000);
}