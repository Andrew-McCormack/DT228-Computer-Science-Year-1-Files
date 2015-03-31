#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 3
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program has had its formating errors fixed */
    
// code

    float var1;
    float var2;

    float *ptr1;
    float *ptr2;
    
    int i;
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    printf("Please input 3 values for ptr1 \n");
    
    
    for(i = 0; i < SIZEONE; i++)
    {
        scanf("%f", &*(ptr1 + i));
    }
    
    for(i = 0; i < SIZEONE; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }
    
    printf("The numbers you enterd copied into ptr2 qlong with the original ptr1 list are: \n");
    
    for(i = 0; i < SIZEONE; i++)
    {
        printf("ptr1 + %d =%f \n", i, *(ptr1 + i));
        printf("ptr2 + %d =%f \n", i,  *(ptr2 + i));
    }
   getchar();getchar();getchar();getchar();getchar(); 
Sleep(15000);
    
  
   
}//end main()
    
    
