# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBER 10
/* Author: Andrew Mc Cormack
     Date: 18/2/14
     Program: Excercise 1
     Details: This program will use 2 functions (1 function to calculate the area of a Square, another function to calculate the area of a Circle). First a a variable will be declared in main() for the 
     length of a side of the Square and another variable for the Radius of the Circle. The user will be asked to enter these values. Using Pass by Reference, these parameters will be passed to the separate 
     functions, calculating the areas of the Square and Circle in their separate function, and displaying their results  main(). This will all be done through Pass by Reference. */
                
//Area_Square() prototype declared
void Area_Square(int*);
//Area_Circle() prototype declared
void Area_Circle(int*);
void main()
{
    int Square, Circle = 0;
    
    printf("Please enter the length of the side of your Square \n");
    scanf("%d", &Square);
    
    printf("\n Please enter the radius of your Circle \n");
    scanf("%d", &Circle);
   
    // Area_Square() function is called
    Area_Square(&Square);
    //Area_Square()  function terminates
    
     // Area_Circle() function is called
    Area_Circle(&Circle);
    //Area_Circle()  function terminates
    

    printf("The area of the Square is %d \n", Square);
    printf("The area of the Circle is %d \n", Circle);
 
    Sleep(15000);
}//end main()


void Area_Square(int* Square_Copy)
{
    *Square_Copy = (*Square_Copy) * (*Square_Copy);
}

void Area_Circle(int* Circle_Copy)
{
    int Pi = 3.14;
    
    *Circle_Copy = Pi * ((*Circle_Copy) * (*Circle_Copy));
}


