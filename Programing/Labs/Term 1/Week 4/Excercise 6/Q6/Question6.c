# include <stdio.h>
# include <Windows.h>
main ()
{
/* This program will accept a temperature in degrees Farenheit and convert it to degrees Celsius,
*/

float farenheit;
float celsius;
float converter1, converter2, converter3;


farenheit = 0;
celsius = 0;
converter1 = 32.0;
converter2 = 5.0;
converter3 = 9.0;


printf("Enter a temperature in degrees Farenheit: \n");
scanf("%f", &farenheit);


celsius = (farenheit - converter1) * (converter2/converter3);


printf("This temperature in degrees Celsius is %f \n", celsius);


Sleep(2000);


}//end main

