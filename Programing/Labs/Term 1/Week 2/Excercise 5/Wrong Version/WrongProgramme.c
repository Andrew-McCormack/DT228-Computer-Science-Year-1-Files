#include <stdio.h>
main()
{
    /* This programme is designed to deliberately display 
             wrong information by using incorrect data type delimiters 
             when using the printf function to display variables.*/
    int wrong1;
    float wrong2;
    char wrong3;
    
    wrong1 = 35;
    wrong2 = 17.5;
    wrong3 = 'g';
    
    printf("wrong1 contains %c\n", wrong1);
    printf("wrong2 contains %d\n", wrong2);
    printf("wrong3 contains %f\n", wrong3);
    
    getchar();
}