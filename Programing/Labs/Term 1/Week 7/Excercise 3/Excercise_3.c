#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 4
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
             This program will allow the user to enter 4 numbers into this array and then display these on the screen in the same order they were entered.
             The program will then swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in the array. Now your program must display the
              numbers on the screen using this new order */
    
        
    int numbers[SIZE] = {0};
    int swap[SIZE] = {0};
    int i;
    int j;
    
    
    printf("Please enter 4 numbera into the array \n");
    
    
    for(i = 0; i < SIZE; i++)//First Loop, takes in user input for numbers untill i < SIZE, thereby completing the array
    {
        scanf("%d", &numbers[i]);
    }
    
    
    printf("\n The numbers you entered were: ");
      
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d, ", numbers[i]);
    }
    
    
    printf("\n Swapping the first entered number with the second \n and third with the last the numbers you entered were: ");
    
    
    for(i = 0; i < SIZE; i = i + 2)//Second Loop, copies the user input from numbers array into swap array thens perform the necessary operations to switch the numbers around until i < Size, thereby copying all of the user input from number array
    {
         j = i + 1;   
         swap[j] = numbers[j];
         printf("%d, %d, ", swap[j], numbers[i]);
    }
          
    
    Sleep(15000);
    
    
    
    
}//end main()
    
    
