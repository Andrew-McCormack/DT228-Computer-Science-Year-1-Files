# include <stdio.h>
main ()
{
  /*This program will display the sum of integers 1 hrough to 5 and also calculate the average
        of the floats 1.0 through to 2.0*/
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    
    
    var1 = 1;
    var2 = 2;
    var3 = 3;
    var4 = 4;
    var5 = 5;
    
    
    int var6;
    var6 = var1 + var2 + var3 + var4 + var5;
    
    
    float var7;
    float var8;
    float var9;
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    float var16;
    float var17;
    
    
    var7 = 1.0;
    var8 = 1.1;
    var9 = 1.2;
    var10 = 1.3;
    var11 = 1.4;
    var12 = 1.5;
    var13 = 1.6;
    var14 = 1.7;
    var15 = 1.8;
    var16 = 1.9;
    var17 = 2.0;
    
    
    float var18;
    var18 = (var7 + var8 + var9 + var10 + var11 + var12 + var13 
    + var14 + var15 + var16 + var17) /11;
    
   
    printf("The sum of integers 1 to 5 is %d", var6);
    printf("\nThe average of floats 1.0 - 2.0 is %f", var18);
    getchar();
    
}//end main