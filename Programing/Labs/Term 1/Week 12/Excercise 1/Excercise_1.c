#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZEONE 3
# define SIZETWO 3
main()
{
    /*  Date: 10/12/13 Author: Andrew McCormack
             This program will use a pointer (which points to a variable called radius to store the radius of a circle) to read the radius of a circle (i.e. use the indirection operator in a scanf() statement to
              read and store the radius inside the floating point radius variable). It will then calculate and display the diameter (2 x radius) and area (? x radius 2) of the circle using other
              pointers (these also need to point to other variables required such as diameter and area). */
    
    float radius, diameter, area = 0;
    float pie = 3.14;
    //Initialising the variables
    
    float *ptr1;
    float *ptr2;
    float *ptr3;
    float *ptr4;
    //Initialising the pointers
    
    ptr1 = &radius;
    ptr2 = &diameter;
    ptr3 = &area;
    ptr4 = &pie;
    //Assinging the pointers to the variables

    
    
    printf("Please enter the radius of the circle \n");
    scanf("%f", &*ptr1);
    //Read in the radius
    
    
    *ptr2 = (*ptr1) * 2;
    //Find the diameter and store it in pointer 2
    *ptr3 = *ptr4 * (*ptr1)*(*ptr1);
    //Find the area and store it in pointer 3
    
    printf("The diameter of the circle is %.2f \n", *ptr2);
    printf("The area of the circle is %.2f \n", *ptr3);
    //Print the diameter and area using the previously calculated pointer 2 and pointer 3
    
    
Sleep(15000);
    
  
   
}//end main()
    
    
