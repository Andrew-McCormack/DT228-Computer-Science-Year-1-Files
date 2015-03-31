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

int varptr;   
int *ptr = (int *)0xF123AB3 ;

    printf("The address of ptr is %p \n", &ptr);
    
ptr = &varptr;
    
varptr = 8;
    
    printf("The contents of ptr is %d \n", *ptr); //%d is used to display the contents of the address of the pointer

ptr++;
    
    printf("The new contents of ptr is %d \n", *ptr);

    
int *ptr2 = (int *) 0xFB6546;
*ptr2 = 10;


printf("The contents of ptr2 at address %p is %d", &ptr2, *ptr2);
  
Sleep(15000);
    
  
   
}//end main()
    
    
