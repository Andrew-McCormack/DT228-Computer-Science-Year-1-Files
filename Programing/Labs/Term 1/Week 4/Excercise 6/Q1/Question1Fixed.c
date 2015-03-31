#include <stdio.h>
main()
{
    /*Variable declared was an int, while delimeter chosen in scanf was a float, corrected 
      delimiter to integer (%d). Also the ampersand (&) symbol was left out of the scanf string*/
    int num;
    
    printf("Please enter a number followed by Enter");
    scanf ("%d", &num);
    printf("The number you typed was: %d", num);
    
    
    getchar ();
    getchar ();
    
}