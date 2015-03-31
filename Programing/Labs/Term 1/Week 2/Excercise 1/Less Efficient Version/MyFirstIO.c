#include <stdio.h>
main()
{
    
  /* This programme is designed to take in to memory 3 variables of different data types and print them. 
         The getchar command will be used to allow the user to see the programme. The programme is slightly 
          ineffiecient as the code skips a line for every variable when printing them.*/
    
    int v1;
    float v2;
    char v3;
    
    v1 = 65;
    v2 = 18.23;
    v3 = 'a';
    
    printf("v1 contains %d\n", v1);
    printf("v2 contains %f\n", v2);
    printf("v3 contains %c\n", v3);
    
    getchar();
}