#include <stdio.h>
main ()
{
//This program will calculate and display the area of a circle of radius 4.8 assuming pi is 3.14

    float area;
    float radius;
    float pi;


    radius = 4.8;
    pi = 3.14;


    area = pi * (radius * radius);


    printf("The area of the circle is %f", area);
    getchar ();

}//End Main