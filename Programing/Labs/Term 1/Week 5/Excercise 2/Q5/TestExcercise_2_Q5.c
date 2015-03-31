#include <stdio.h>
#include <Windows.h>
#include<conio.h>

void main() 
{
/* This program will read in three values for sides of a triangle and determine if it will form a valid triangle */
     
    int side1, side2, side3, largeside, sum;
    side1 = 0;
    side2 = 0;
    side3 = 0;
    largeside = 0;
    sum = 0;
    
    clrscr();
    
    printf("Input three numbers to form the sides of a triangle \n");
    scanf("%d", &side1);
    scanf("%d", &side2);
    scanf("%d", &side3);
    
 if (sum <= 0)
 {     
    if(side1>side2)
    {

        if(side1>side3)

            {

                sum =side2+side3;

                largeside =side1;

            }

        else

            {

                sum =side1+side2;

                largeside =side3;

            }

    }

else

    {

        if(side2>side3)

            {

                sum =side1+side3;

                largeside =side3;

            }

    }
}



else if(sum>largeside)
    
        printf("The triangle is a valid triangle");
    
else
    
    printf("The triangle is an invalid triangle");
    printf("\nPress any key to exit.");
    getchar();



 
    Sleep(2000);
}//end main    
     
    
         