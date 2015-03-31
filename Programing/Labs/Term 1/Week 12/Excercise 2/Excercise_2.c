#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 3
main()
{
    /*  Date: 10/12/13 Author: Andrew McCormack
             This program has been taken from a sample and I will attempt to explain everything that will happen in the program */
    
int count = 10, *temp, sum = 0;
// int count is initialized as 10, the pointer temp and integer sum are initialized as 0
    
temp = &count;
// The pointer temp is pointed to the int count, making their contents both equal to 10 as count was already initialized as such
    
*temp = 20;
// The contents of the pointer temp is changed to 20 and because temp is pointed to sum, the contents of count will  also be equal to 20
    
temp = &sum;
// The pointer temp is now chamged to point to the int sum which has been initialized as 0, making the contents of both temp and sum equal to 0
    
*temp = count;
// The contents of the pointer temp is changed to the contents of the int count, whoose contents has already been changed to 20, causing the contents of temp and the corresponding sum its pointing to equal to 20 as well
    
    
printf("count= %d, *temp = %d, sum = %d\n", count, *temp, sum );
// All three varaibles are equal to 20 so 20 will be displayed for each one
    
    
Sleep(15000);
    
  
   
}//end main()
    
    
