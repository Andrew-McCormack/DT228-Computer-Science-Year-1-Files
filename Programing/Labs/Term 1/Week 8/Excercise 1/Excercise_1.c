#include <stdio.h>+
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
# define  SIZE 10
main()
{
    /*  Date: 5/11/13 Author: Andrew McCormack
 */
    
        
    int a[SIZE] = {0};
    int i;
    
    
    for (i = 0; i < 10; i++)
    {
        a[i] = 9 - i;
    }
    
    
    for (i = 0;i < 10; i++)
    {
    
        a[i] = a[ a[i] ];
    
    }
    
    /*a[8] will display 1 because in the first for loop, 9 is taken away from whatever i is in the loop which in the case of i[8] is 8 i.e. 9 - 8 = 1. Then in the second loop, a[8] will again display 1 
            because a[8] is made equal to  a times (a times i) is equal to a times (a times 8) i.e. a[8] is equal to a[8] and as we know from the previous loop, a[8] is equal to 1.*/
    printf("%d", a[8]);
    
    Sleep(15000);
    
    
    
    
}//end main()
    
    
