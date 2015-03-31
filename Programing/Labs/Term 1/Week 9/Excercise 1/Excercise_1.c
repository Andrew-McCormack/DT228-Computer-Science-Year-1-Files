#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 4
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will define and initialise a two d matrix integer array with 3 x 4 elements, and then multiply the two arrays together using a separate array*/
    
    
    int two_dee_array1[SIZEONE][SIZETWO] =  {{ 0,0,0,0 },
                                             {1,1,1,1 },      
                                             {2,2,2,2 } 
                                            };
    int two_dee_array2[SIZEONE][SIZETWO] = {{0,0,0,0},
                                              {1,1,1,1},      
                                              {2,2,2,2} 
                                            };

    int two_dee_array3[SIZEONE][SIZETWO];
    
    int i;
    int j;
                                           
                                           
    for (i = 0; i < SIZEONE; i++)
    {
        for (j = 0 ; j < SIZETWO; j++)
        {
            two_dee_array3[i][j] = two_dee_array1[i][j] * two_dee_array2[i][j];
        }
    }
    
    
    printf("Array 1 multiplied by array 2 is equal to:");
    
    
      for (i = 0; i < SIZEONE; i++)
    {
        for (j = 0 ; j < SIZETWO; j++)
        {
            printf("%d,",two_dee_array3[i][j]);
        }
    }
    
        
 
    Sleep(15000);
    
    
    
    
}//end main()
    
    
