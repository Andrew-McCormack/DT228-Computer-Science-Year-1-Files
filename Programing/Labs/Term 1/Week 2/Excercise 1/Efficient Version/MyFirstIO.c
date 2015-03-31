#include <stdio.h>
main()
{
 /* This programme is designed to take in to memory 3 variables of different data types and print them. 
       The getchar command will be used to allow the user to see the programme. The programme is more effiecient
       as the code does not skip a line for every variable when printing them.*/
    int v1;
    float v2;
    char v3;
    
    v1 = 65;
    v2 = 18.23;
    v3 = 'a';
    
    printf("v1 contains %d, v2 contains %f, v3 contains %c", v1,v2,v3);
    
    getchar();
}