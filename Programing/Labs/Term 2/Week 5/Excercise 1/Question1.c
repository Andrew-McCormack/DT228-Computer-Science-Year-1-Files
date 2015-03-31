# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //What do the following printf() statements display
    //(a)
    printf("%5s", "abcd");
    
    
    //(b)
    printf("%5s", "abcdef");
    
    //(c)
    printf("%-5s", "abc");
    
    //(d)
    printf("%5.2s", "abcde");
    
    //(e)
    printf("%-5.2s", "abcde");
    
    Sleep(150000);
}