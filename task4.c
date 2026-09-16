#include <stdio.h>
int main() {
float length, width, area, perimeter;
printf("enter the length of rectangle: \n");
scanf ("%f",&length);
printf("enter the width of rectangle: \n");
scanf(" %f",&width);
perimeter=2*(length+width); area=length*width;
printf("area of the rectangle is: %.2f\n", area);
printf("perimeter of the rectangle is: %.2f\n", perimeter);
return 0;
}