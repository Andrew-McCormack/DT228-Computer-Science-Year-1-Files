# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
main()
{
    //Program to read in and display string with specific characters with and without null character and display each version
    char my_word_no_null[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char my_word_with_null[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    
    printf("Displaying without null character ");
    printf("%s \n", my_word_no_null);
    puts(my_word_no_null);
    printf("Displaying with null character ");
    puts(my_word_with_null);
    printf("%s \n", my_word_with_null);
    
    Sleep(150000);
}