//Program to demonstrate declaring constants
#include<stdio.h>
#define PI 3.141
int main()
{
const double cPI = 3.141;
float radius;
float area_nc, area;
//read in radius
printf("Enter the radius: ");
scanf("%f", &radius);
//compute area with named constant
area_nc = cPI * radius * radius;
//output the area with named constant
printf("\nThe area using named constant is %f", area_nc);
//compute area using #define Pi as a constant
area = PI * radius * radius;
//output the area with #define
printf("\nThe area using #define is %f", area);
return 0;
}
