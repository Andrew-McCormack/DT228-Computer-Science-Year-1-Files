#include <stdio.h>
#include <Windows.h>
main()
{
/* This program will read in three values for sides of a triangle and determine if it will form a valid triangle */
     
    float side1, side2, side3;
    side1 = 0;
    side2 = 0;
    side3 = 0;
    
    float answer1, answer2, answer3;
    answer1 = 0;
    answer2 = 0;
    answer3 = 0;
    
    
    printf("Input three numbers to form the sides of a triangle \n");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);
   
    
    answer1 = side1 + side2;
    answer2 = side2 + side3;
    answer3 = side3 + side1;
    
    
    if (answer1 > side3)
    {
        printf("Will form a valid triangle");
    }
    else if (answer2 > side1)
    {
        printf("Will form a valid triangle");
    }
    else if (answer3 > side2)
    {
        printf("Will form a valid triangle");
    }
    else
    {
        printf("Will not form a valid triangle");
    }
    
    
    Sleep(2000);
}//end main    
     
    
         