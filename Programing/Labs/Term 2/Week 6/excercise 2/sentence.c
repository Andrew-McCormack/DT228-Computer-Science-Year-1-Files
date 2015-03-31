# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# include <string.h>
main()
{
    char sentence[100];
    char string[100] = "My sentence is:";
    char blank = ' ';
    int i, counter, is = 0;
    printf("Enter your sentence \n");
    
    fgets(sentence, 100, stdin);
    
    printf("%s", sentence);
    
    
    for(i = 0; sentence[i] != '\0'; i++)
    {
        if(sentence[i] == blank)
        {
            if(sentence[i + 1] == 'i')
            {
                if(sentence[i + 2] == 's')
                {
                    is++;
                }
            }
        }
    }    
    printf("There are %d uses of the word is in your sentence \n", is);
    printf("There are %d characters in your sentence (not including spaces) \n", i);
    
    strcpy(string, "My sentence is: ");
    strcat(string, sentence);
    printf("%s", string);
    
    
    Sleep(150000); 
}
    