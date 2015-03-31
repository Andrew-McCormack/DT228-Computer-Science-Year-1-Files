# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //What is the output of the following two program segments
    
     char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while (text <= p)
    {
        puts(p--);
    }
    
    //Output will be d ,the cd, the, bcd, then abcd
    
    Sleep(150000);
}