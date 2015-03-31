#include <stdio.h>
main ()
{
//This program will use the modulus operator calculate and display the remainder of the following arithmetic operations

    int modop1, modop2, modop3, modop4, modop5, modop6;
    
    
    modop1 = 2%2;
    modop2 = 3%2;
    modop3 = 5%2;
    modop4 = 7%3;
    modop5 = 100%33;
    modop6 = 100%7;
    
    printf("The modulus operator of 2 into 2 is %d\n", modop1);
    printf("The modulus operator of 3 into 2 is %d\n", modop2);
    printf("The modulus operator of 5 into 2 is %d\n", modop3);
    printf("The modulus operator of 7 into 3 is %d\n", modop4);
    printf("The modulus operator of 100 into 33 is %d\n", modop5);
    printf("The modulus operator of 100 into 7 is %d\n", modop6);
    getchar ();

    
}//End Main