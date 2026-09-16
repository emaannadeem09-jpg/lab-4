#include <stdio.h>
int main() 
{int marks;
printf("enter your marks out of 100: \n");
scanf ("%d",&marks) ;
if (marks>=50)
{
printf("pass");
} else
{
printf("fail");
}
return 0;
}