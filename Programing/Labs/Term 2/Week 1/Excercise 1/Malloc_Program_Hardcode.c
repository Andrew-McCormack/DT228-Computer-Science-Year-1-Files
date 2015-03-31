# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
/* Date: 28/1/14
    Author: Andrew McCormack
    Content: This program will use the malloc() function to Calculate the size of a block of memory required to input a given set of numbers, whereby it will display, "Cannot allocate memory", if it is unable
                  to find space in memory or, "Enter your numbers" if it can. It determines this by casting which forces the number given for maloc() to be represented in int form. This program uses hardcode 
                   expression for the integer sizes, i.e. 4*/
main()
{
    int *Ptr;
    int No_of_elements, No_of_bytes, i;
    
    
    printf("How many numbers do you want to enter \n");
    scanf("%d", &No_of_elements);
    
    
    /*Calculate the size of block of memory requires*/
    No_of_bytes = No_of_elements * 4;
    Ptr = (int*) malloc(No_of_bytes);
    
    
    if(Ptr == NULL)
    {
        printf("Cannot allocate memory \n");
    }
    
    
    else
    {
        printf("Enter your numbers");
        /*Enter the numbers into the block of memory*/
        for (i =0; i < No_of_elements; i++)
        {
            scanf("%d", &*(Ptr + i));
        }
        
        
        /*Display the numbers inside the block of memory*/
        
        for (i = 0; i < No_of_elements; i++)
        {
            printf("%d \n", *(Ptr + i));
        }
        
        /*Release the memory after use*/
        free(Ptr);
    }/*End else*/
    Sleep(15000);
}/*End main*/