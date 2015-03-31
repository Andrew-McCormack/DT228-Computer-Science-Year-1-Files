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

float input1 = 4.13;
float input2 = 5.40;
    
float *ptr1, *ptr2;


printf("The address of input1 is %p \n", &input1);
printf("The address of input2 is %p \n", &input2);
    
printf("The address of ptr1 is %p \n", &ptr1);
printf("The address of ptr2 is %p \n", &ptr2);
    

ptr1 = &input1;
ptr2 = &input2;
    
printf("The contents of ptr1 is %p \n", ptr1);
printf("The contents of ptr2 is %p \n", ptr2);

printf("The contents of ptr1 is %f \n", *ptr1);
printf("The contents of ptr2 is %f \n", *ptr2);
    
    
Sleep(15000);
    
  
   
}//end main()
    
    
