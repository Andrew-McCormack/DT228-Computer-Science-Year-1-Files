# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# define SIZE 5
main()
{
    int x1, x2, y1, y2;
    int user_x1, user_y1;
    
    
    printf("Enter the top left coordinates of the square in the order x, y \n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    
    
    printf("Enter the bottom right coordinates of the square in the order x, y \n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    
    printf("Enter the coordinates of the point you wish to check is in the square \n");
    scanf("%d", &user_x1);
    scanf("%d", &user_y1);
    
    
    if (user_x1 > x1 && user_y1 < y1 && user_x1 < x2 && user_y1 > y2)
    {
        printf("The point lies within the square");
    }
    
    else
    {
        printf("The point lies outside the square");
    }
    
    
    Sleep(15000);
}