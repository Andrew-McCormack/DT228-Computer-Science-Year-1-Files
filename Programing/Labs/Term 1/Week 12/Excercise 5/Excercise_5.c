#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 5
main()
{
    /*  Date: 10/12/13 Author: Andrew McCormack
             This program will dlare and initialise a floating - point array with 3 elements to contain 1.1, 2.2, and 3.3 respectively and then using pointer notation only , try to display the contents of the addresses outside the bounds of this arra*/
    
 float array1[SIZE];
 float array2[SIZE];
 int i, j;
 float temp, total, average;
 
 
 printf("Enter in 5 values for the array: \n");
 
 
 for(i = 0; i < SIZE; i ++)
 {
     scanf("%f", &*(array1 + i));
 }
 
 
  for(i = 0; i < SIZE; i++)//Second Loop, copies the user input from numbers array into copy array and display each one until i < Size, thereby copying all of the user input from number array
    {
        for(j = i; j < SIZE; j++)
        {  
        if (*(array1 + i) > *(array1 + j))
        {
            temp = *(array1 + i);
            *(array1 + i) = *(array1 + j);
            *(array1 + j) = temp;
        }
    }
 }


 printf("\n The numbers you entered in senquential order are: \n");
 

 for(i = 0; i < SIZE; i ++)
 {
     printf("%f \n", *(array1 + i));
 }
 
 
 for(i = 0; i < SIZE; i ++)
 {
     total += *(array1 + i);
 }
 
 
 average = total / SIZE;
 printf("\n The average of the numbers you entered is %f \n", average);
 
 
 for (i = 0; i < SIZE; i ++)
 {
    *(array2 + i) = *(array1 + i);
    *(array2 + i) = *(array1 + SIZE - i - 1); 
 }
      
 

 for(i = 0; i < SIZE; i ++)
 {
     printf("The contents of array1[%d] is: \n", i); 
     printf("%f \n", *(array1 + i));
     printf("The contents of array2[%d], which is array1 in reverse order is: \n", i); 
     printf("%f \n", *(array2 + i));
 } 
 
 

Sleep(30000);
    
  
   
}//end main()
    
    
