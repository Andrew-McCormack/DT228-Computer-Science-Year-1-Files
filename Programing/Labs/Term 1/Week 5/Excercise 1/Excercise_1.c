#include <stdio.h>
main()
{
/* Tis program will ask the user to enter a character from
     the keyboard and displays a message whether the character is a vowel (a, e, i, o, u) or
     not. b using switch statements*/
     
     
     char letter;
     
     
     printf("Enter a character on your keyboard \n");
     scanf("%1s", &letter);
     
     
     switch(letter)
     {
         case 'a':
         case 'e':    
         case 'i':
         case 'o':
         case 'u':
         {
           printf("%c is a vowel \n", letter);
           break;
         }
         
         
         default:
         {
            printf("%c is not a vowel \n", letter);
            break;    
         }//end default
    
     }//end switch
 
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
}//end main     
         