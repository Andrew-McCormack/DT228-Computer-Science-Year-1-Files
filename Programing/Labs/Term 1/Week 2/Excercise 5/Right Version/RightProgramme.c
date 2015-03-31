#include <stdio.h>
main()
{
    /* This programme is designed to display right information by 
             using corrected data type delimiters when using 
             the printf function to display variable. However,
             the character is told to print as an integer using the %d delimiter*/
    int right1;
    float right2;
    char right3;
    
    right1 = 35;
    right2 = 17.5;
    right3 = 'g';
    
    printf("right1 contains %d\n", right1);
    printf("right2 contains %f\n", right2);
    printf("right3 contains %d\n", right3);
    
    getchar();
}