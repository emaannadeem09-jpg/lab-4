#include <stdio.h>
int main() {
int latedays;
printf("enter the number of late days: \n");
scanf ("%d", &latedays);
if (latedays==0)
{
printf("no fine \n");
} if(latedays>=1 && latedays<=5)
{
printf("fine Rs.50 \n");
} if(latedays>=6 && latedays<=10)
{
printf("fine Rs. 100 \n");
}
if (latedays>10)
{
printf("fine Rs. 200");
}
return 0;
}