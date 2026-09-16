#include <stdio.h>
int main() 
{float celcius, farenheit;
printf("enter the temperature in celcius: \n");
scanf ("%f", &celcius);
farenheit=(celcius*9/5)+32;
printf("temperature in farenheit is: %.2f\n", farenheit);
return 0;}