#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 2
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program contains formating errors as commented below */
    
// code
int var1;
int *ptr;
var1 = 1;
ptr = &var1;


    printf("the address of var1 is %d", &var1); //the %d should be %p

    printf("ptr contains %p",ptr); 
/*
there is a missing & and should be
&ptr
*/
printf("*ptr contains %d",ptr); 
    /*
there is a missing * (indirection
operator) and therefore should be
*ptr
*/

  
Sleep(15000);
    
  
   
}//end main()
    
    
