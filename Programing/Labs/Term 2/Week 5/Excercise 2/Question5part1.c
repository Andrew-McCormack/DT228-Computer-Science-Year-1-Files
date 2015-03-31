# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //What is the output of the following two program segments
    
    char *p = "abcd";
    while (*p)
    {
        putchar(*p++);
    }
    
    //Output will be abcd
    
    Sleep(150000);
}