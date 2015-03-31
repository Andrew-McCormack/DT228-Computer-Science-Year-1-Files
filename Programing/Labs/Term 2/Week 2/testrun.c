# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define NUMBERS 5

void stars(int);
void main()
{
    int i, why;
    printf("How many stars do you want?");
    scanf("%d", &why);
   
    stars(why);
    
    
    printf("Finished stars function");
    Sleep(15000);
}

void stars(int why2)
{
    int i;
    for(i = 0; i< why2; i++ )
    {
        printf("*");
    }
    printf("\n");
}