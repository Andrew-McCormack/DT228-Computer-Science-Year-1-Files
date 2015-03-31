# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //What is the output of the following
    char *text ="some text";
    
    printf("%s\n", text); //will be some text
    printf("%c\n", *text); //will be s
    printf("%c\n", *"more text"); //will be m

    printf("%c\n", *(text + 1)); //will be o
     
    printf("%s", text+1); //will be ome text
      
    printf("text"); //will be text
     
    *(text + 4) = '\0'; printf("\n%s\n", text); //will be some
    
    printf("%c", "text"[2]); //will be x

    printf("%s", "text" + 2); //will be xt
    
    Sleep(150000);
}