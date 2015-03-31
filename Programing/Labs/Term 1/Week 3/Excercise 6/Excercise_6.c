#include <stdio.h>
main ()
{
//This program will calculate and  display the answer to the following operations

    
    int operation1, operation2, operation3, operation5;
    float operation4;
    
    
    operation1 = 15 + 10;
    operation2 = 15 - 10;
    operation3 = 15 * 10;
    operation4 = 10 / 15;
    operation5 = 15 % 3;
    
    
    printf("Fifteen plus ten is %d\n", operation1);
    printf("Fifteen minus ten is %d\n", operation2);
    printf("Fifteen multiplied by ten is %d\n", operation3);
    printf("Fifteen divided by ten is %f\n", operation4);
    printf("The modulus operation of fifteen divided by three is %d\n", operation5);
    
    getchar ();

}//End Main