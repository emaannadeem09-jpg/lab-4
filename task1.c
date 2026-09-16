#include <stdio.h>
int main() 
{
float percentage, familyincome;
printf("enter the marks: \n");
scanf ("%f", &percentage) ;
printf("enter family income: \n");
scanf ("%f", &familyincome);
if (percentage>=80 || familyincome <50,000)
{
printf("scholarship granted \n");
} else
{
printf("scholarship denied \n");
}
return 0;
}