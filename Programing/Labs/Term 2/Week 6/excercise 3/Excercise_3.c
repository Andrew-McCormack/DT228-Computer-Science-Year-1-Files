# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# include <string.h>
main()
{
    char two_words[21];
    char word1[11];
    char word2[11];
    char string[25] = "First word entered is: ";
    char blank = ' ';
    int i, counter = 0;
    int j = 0;
    
    printf("Enter your two words in this order: word1(space)word2 \n");
    fgets(two_words, 21, stdin);
    
    
    for (i = 0; two_words[i] != '\0'; i++)
    {
        if (two_words[i] == blank)
        {
            counter = 1;
            word1[i] = '\0';
        }
        
        else if (counter == 1)
        {
            word2[j] = two_words[i];
            j++;
        }
        
        else
        {
            word1[i] = two_words[i];
        }
    }
    

    counter = 0;
    
    
    for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++)
    {
        if (word1[i] != word2[i])
        {
            counter = 1;
        }
    }
                
    
    if (counter == 0)
    {
        printf("Word1: %s and word2: %s are the same words \n", word1, word2);
    }
    
    else
    {
        printf("Word1: %s and word2: %s are not the same words \n", word1, word2);
    }
    
    
    strcat(string, word1);
    
    
    printf("%s \n", string);
    counter = 0;
    
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            counter++;
        }
    }
    
    printf("The length of the string is %d, and it contains %d non-whitespace characters", strlen(string), counter);
    
    
    Sleep(150000); 
}
    