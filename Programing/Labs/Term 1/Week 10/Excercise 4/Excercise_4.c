#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 2
main()
{
int num1, num2, sum = 0;
int *ptr1;
int *ptr2;
int *ptr3;


printf("Enter two integer values \n");
scanf("%d", &num1);
scanf("%d", &num2);


ptr1 = &num1;
ptr2 = &num2;
ptr3 = &sum;


*ptr3 = *(ptr1)  + *(ptr2);


printf("\n The sum of the two numbers entered is: %d \n", *ptr3);

Sleep(15000);
    
}//end main()
    
    
