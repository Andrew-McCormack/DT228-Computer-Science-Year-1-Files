#include <stdio.h>
#include <conio.h>
#include <dos.h>
main()
{
    /*This program will  ask the user to input their age and display the number of beats their heart has made in thier lives*/
    float age;
    age = 0;
    
    
    float beats_per_year;
    beats_per_year = 39446175;
    
    
    float multiply;
    
   
    printf("Please input your age\n"); 
    scanf("%f", &age);
    
    multiply =  age * beats_per_year;
    
    
    printf("Your heart has beaten a total of %f\n", multiply);
   

    sleep(10000);
    
}