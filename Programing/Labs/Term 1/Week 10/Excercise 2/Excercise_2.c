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

int num1;
char char1;
int *ptr1;
char *ptr2;
 //int *ptr3; This must be changed to a char for it to point to char1
char *ptr3;
    
num1 = 7;
char1 = 'g';
    
ptr1 = &num1;
ptr2 = &char1;
ptr3 = &char1; //The program will not compile if  ptr3 is not initialised as a char because the compiler will give an error message stating that a char * cannot be converted to an int *

    
printf("The contents of num1 is %d \n", num1);
printf("The contents of char1 is %c \n", char1);
printf("The address of num1 is %p \n", &num1);
printf("The address of char1 is %p \n", &char1);
    
    
printf("The contents of ptr1 is %p \n", ptr1);
printf("The contents of ptr2 is %p \n", ptr2);
printf("The contents of the address stored at ptr1 is %d \n", *ptr1);
printf("The contents of the address stored at ptr2 is %c \n", *ptr2);

printf("The address of ptr1 is %p \n", &ptr1);
printf("The address of ptr2 is %p \n", &ptr2);


printf("The contents of the address stored on ptr3 using integer datatype notation is %d \n", *ptr3);// When %d datatype is used, the char will be converted to its integer equivalent
printf("The contents of the address stored on ptr3 using character datatype notation is %c \n", *ptr3);

    
Sleep(15000);
    
  
   
}//end main()
    
    
