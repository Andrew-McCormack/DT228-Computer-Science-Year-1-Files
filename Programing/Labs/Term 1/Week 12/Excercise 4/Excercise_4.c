#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 3

main()
{
    /*  Date: 10/12/13 Author: Andrew McCormack
             This program will dlare and initialise a floating - point array with 3 elements to contain 1.1, 2.2, and 3.3 respectively and then using pointer notation only , try to display the contents of the addresses outside the bounds of this arra*/
    
 float array1[SIZE] = {1.1,2.2,3.3};
 
 
 printf("The contents of the address before array[0] is %f and after array[2] is %f", *(array1 - 1), *(array1 + 3));//array - 1 is array[-1] and array + 3 is array[3], which are both outside the  bounds of the array

    
Sleep(15000);
    
  
   
}//end main()
    
    
