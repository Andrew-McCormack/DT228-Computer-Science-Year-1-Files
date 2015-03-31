# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
main()
{
    float euro[SIZE];
    float dollar[SIZE];
    int i;
    

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &euro[i]);
    }
    
    for(i = 0; i < SIZE; i++)
    {
        dollar[i] = euro[i];
    }
    
    
    for(i = 0; i < SIZE; i++)
    {
        dollar[i] = euro[i] * 1.35;
    }
    
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Euro[%d] is %f, Dollar[%d] is %f \n", i, euro[i], i, dollar[i]);
    }
    
    
    Sleep(15000);
}