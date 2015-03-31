#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 4
# define SIZETWO 6
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program will define compute the sum of all the elements within the array shown
 */
    
    
  int data[SIZEONE][SIZETWO] = {{3, 2, 5, 7, 4, 2},
                                {1, 4, 4, 8, 13, 1},
                                {9, 1, 0, 2, 0, 0},
                                {0, 2, 6, 3, -1, -8}
                               };
// declare the sum
int i, j, total = 0;

// compute the sum
for ( i=0; i < SIZEONE; i++)
{
   
    for ( j=0; j < SIZETWO; j++)
    {
    // calculate the sum here
        total += data[i][j];
    }
}
    

// display the sum
printf( "The total of the two d array is %d", total);

Sleep(15000);
    
    
    
    
}//end main()
    
    
