# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //Given the following array what is wrong with the following statements
    
    //char name[] = {'R', 'o', 'b', 'e', 'r', 't'}; 
    char *name;
    name = "Robert";

    
    puts(name);
    scanf("%s", &name);
    strcpy(name, "Philip");
    *(name + 5) = 'a';
    name = "Philip";
    
    Sleep(150000);
}