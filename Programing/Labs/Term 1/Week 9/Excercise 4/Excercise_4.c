#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 2
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program will define a two d matrix integer array with 3 x 2 elements, read in the values into the array, and then add the contents of the arrays columns and add the contents of the arrays rows */
    
// code
int var1;
int *ptr;
var1 = 1;
ptr = &var1;
..
..
printf("the address of var1 is
%d
", &var1); //
the %d should be
%p
pr
intf("ptr contains %p",
ptr
); /*
there is a missing & and should be
&ptr
*/
pri
ntf("*ptr contains %d",
ptr
); /*
there is a missing * (indirection
operator) and therefore should be
*ptr
*/
..
..
}
  
Sleep(15000);
    
  
   
}//end main()
    
    
