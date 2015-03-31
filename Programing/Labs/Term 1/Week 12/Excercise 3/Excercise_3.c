#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 3

main()
{
    /*  Date: 10/12/13 Author: Andrew McCormack
             This program will read 3 integers into an integer array and copies these numbers to a different integer array. It will then display the contents of each array side by side. 
              This will be done using pointer notation only to read the numbers into the array, copying the numbers, and displaying the contents of both arrays.*/
    
    int *array1, *array2, i; 
    
    int no_of_bytes = 0;
    no_of_bytes = 3 * sizeof(int);
    
    array1 = (int *)malloc(no_of_bytes);
    array2 = (int *)malloc(no_of_bytes);
    
    if(array1 == NULL)
    {
        printf("Cannot allocate memory \n");
    }
    
    else if(array2 == NULL)
    {
        printf("Cannot allocate memory \n");
    }
    
    else
    {
    
    printf("Please enter 3 integer numbers into the array \n");
    
    
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &*(array1 + i));
    }
    
    
      for (i = 0; i < SIZE; i++)
    {
        *array2 = *(array1 + i);
    }
     
    for (i = 0; i < SIZE; i++)
    {
        printf("The contents of array1[%d] is %d \n", i, *(array1 + i));
        printf("The contents of array2[%d] is %d \n", i, *(array1 + i));
    }
    
    free(array1);
    free(array2);

}
    
Sleep(15000);
    
  
   
}//end main()
    
    
