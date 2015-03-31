#include <stdio.h>;
main()
{
    /*Program to illustrate errors in a C program. 
           This version has been fixed*/
    
    int i;
    float j;
    
    i = 5;
    j = 40.200;
    
    printf("The value of i is %d\n", i);
    printf("The value of j is %f\n", j);
    printf("Size of an integer is %d\n", sizeof(int));
    
    getchar();
}