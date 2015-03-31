#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 2
main()
{
    /*  Date: 19/11/13 Author: Andrew McCormack
             This program will define a two d matrix integer array with 3 x 2 elements, read in the values into the array, and then add the contents of the arrays columns and add the contents of the arrays rows */
    
    
   int data[SIZEONE][SIZETWO];

int i, j;
                  
int row_1 = 0;
int row_2 = 0;
    
int column_1 = 0; 
int column_2 = 0;
int column_3 = 0;
    
int biggest = 0;

    
printf("Enter values for the 3 x 2 array \n");    
    
    
for (i = 0; i < SIZEONE; i++)//First outer and inner for loop will find the sum of each column in the array
{
    for (j = 0; j < SIZETWO; j++)
    {
        scanf("%d", &data[i][j]);
    }
}
    
 for (i = 0; i < SIZEONE; i++)
    {
     
        
        for (j = 0 ; j < SIZETWO; j++)
        {
            
            if (i == 0)
            {
                column_1 += data[i][j];
            }
            else if (i == 1)
            {
                column_2 += data[i][j];
            }
            else if (i == 2)
            {
                column_3 += data[i][j];
            }
            
  
        }
    }
    
    
    
    for (i = 0; i < SIZETWO; i++)/* Second outer and inner for() loop will find the sum of the rows in the array. Two inner/outer for() loops are needed to find the sum of columns and rows separately 
                                                                       because to find the sum of the columns, the data array must be laid out as [0][0],[0][1] etc so in this case i needs to be smaller than SIZEONE and j smaller than SIZETWO wheras when finding the sum of 
                                                                      rows, i has to be smaller than SIZETWO and j smaller than SIZEONE so that the data array can be layed out as [0][0],[1][0] etc. Otherwise, j would only get incremented to 1 and therefore only the sum of
                                                                     the first two elements of each row will be found*/
    {
     
        
        for (j = 0 ; j < SIZEONE; j++)
        {
            
            if (i == 0)
            {
                row_1 += data[j][i];
            }
            else if (i == 1)
            {
                row_2 += data[j][i];
            }
  
        }
    }
    

    biggest = data[0][0];//initializing to find biggest
     for(i = 0; i < SIZEONE; i++)
    {
        
        for(j = 0; j < SIZETWO; j++)
        {
            if (data[i][j] > biggest)//tests the array to find biggest
            { 
                biggest = data[i][j];
            }
        }//end inner for for colum
    }//end outer for for row
    
    
            printf("The sum of column 1 is: %d \n", column_1);
            printf("The sum of column 2 is: %d \n", column_2);
            printf("The sum of column 3 is: %d \n", column_3);

            printf("The sum of row 1 is: %d \n", row_1);
            printf("The sum of row 2 is: %d \n", row_2);
            printf("The highest number you entered is %d", biggest);
            
  
Sleep(15000);
    
  
   
}//end main()
    
    
