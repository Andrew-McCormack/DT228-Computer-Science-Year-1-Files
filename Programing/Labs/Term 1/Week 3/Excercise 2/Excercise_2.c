# include <stdio.h>
main ()
{
  /*This program will display the volume and surface area of a box  with height 10cm, 
        length 11.5cm and width 2.5*/
    
    
    int height = 10;
    float length = 11.5;
    float width = 2.5;
    float volume;
    float SurfaceArea;
    
    
    volume = height * length * width;
    SurfaceArea = 2 * (length * width) + 2 * (length * height) + 2 * (height * width);
    
    
    printf("The volume of the box is %5.1f", volume);
    printf("\nThe surface area of the box is %5.1f", SurfaceArea);
    getchar();
    
    
    
}//end main