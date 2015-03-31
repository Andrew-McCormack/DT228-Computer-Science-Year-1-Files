#include <stdio.h>
#include <conio.h>
#include <dos.h>
main()
{
    /*This program will  ask for imput of values from the keyboard for each of the following*/
    
    
    int first;
    int second, third, fourth;
    
    float principal, rate, time;
    
    char keyval1, keyval2;
    
    long int total1, total2, total3;
    
    char c;
    int i;
    float f;
    long int l;
    double d;
    
    
    printf("Please enter integer 1 \n");
    scanf ("%d", &first);
    printf("You typed:%d \n", first);
    
    
    printf("Please enter integers 2,3 and 4 \n");
    scanf("%d %d %d", &second, &third, &fourth);
    printf("You typed: %d,%d,%d \n", second, third, fourth);
    
    
    printf("Please enter floats for principal, rate and time \n");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("You typed: %.2f,%.2f,%.2f \n", principal, rate, time);
    
    
    printf("Please enter characters for keyval1 and 2 \n");
    scanf("%1s %1s", &keyval1, &keyval2);
    printf("You typed: %c,%c \n", keyval1, keyval2);
    
    
    printf("Please enter long ints for total1 2 and 3 \n");
    scanf("%d %d", &total1, &total2, &total3);
    printf("You typed: %d,%d \n", total1, total2, total3);
    
    
    printf("Please enter character for 'c' \n");
    scanf("%1s", &c);
    printf("You typed: %c \n", c);
    
    
    printf("Please enter integer and long integer for i and l \n");
    scanf("%d %d", &i, &l);
    printf("You typed: %d,%d \n", i, l);
    
    
    printf("Please enter float and double for f and d \n");
    scanf("%f %1f", &f, &d);
    printf("You typed: %f,%f \n", f, d);
    
    
     sleep(10);
    
}