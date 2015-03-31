# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
/* Date: 28/1/14
    Author: Andrew McCormack
    Content: This program will use the calloc() function to Calculate the size of a block of memory required to input a given set of numbers, whereby it will display, "Cannot allocate memory", if it is unable
                  to find space in memory or, "Enter your numbers" if it can. The only difference between malloc() and calloc() is that, malloc() allocates single block of memory whereas calloc() 
                  allocates multiple blocks of memory each of same size and sets all bytes to zero. This program will use hardcode instead of datatype defining so it won't compile
*/
 main()
{
    float *ptr, *average;
    int No_elements, i;
    int av_no = 1;
    
    
    printf("How many elements?");
    scanf("%d", &No_elements);
    
    /*Allocate the block of memory*/
    ptr = (float*) calloc(No_elements, sizeof(float));
    /*Check if memory is allocated successfully*/
    
    /*Allocate the block of memory*/
    average = (float*) calloc(av_no, sizeof(float));
    /*Check if memory is allocated successfully*/
   
    if(ptr == NULL)
    {
        printf("Cannot allocate memory");
    }
    
    else if(average == NULL)
    {
        printf("Cannot allocate memory");
    }
    
    
    else
    {
        /*Enter the elements into the block of memory*/
        printf("Enter your numbers \n");
        for(i = 0; i < No_elements; i ++)
        {
            scanf("%f", &*(ptr + i));
            average += (ptr + i);
        }
        
        
        /*Display the elements inside the block of memory*/
        for(i = 0; i < No_elements; i ++)
        {
            printf("%f \n", *(ptr + i));
        }
        
        average = average / No_elements;
        printf"Average of entered numbers is %f", average); 
        /*Release the memory after use*/
        
        
        free(ptr);
        free(average);
    }/*End else*/
    Sleep(15000);
}/*End main*/