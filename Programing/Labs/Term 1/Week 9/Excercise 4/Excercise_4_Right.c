#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 2
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program has had its formating errors fixed */
    
// code
int var1;
int *ptr;
var1 = 1;
ptr = &var1;


    printf("the address of var1 is %p \n", &var1);

    printf("ptr contains %p \n", &ptr); 

printf("*ptr contains %d \n", *ptr); 


  
Sleep(15000);
    
  
   
}//end main()
    
    
