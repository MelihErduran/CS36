/*****************************************/
/* Lab 3 Question 3                      */
/* Name : Melih Erduran                  */
/* Student ID : 1252917                  */
/* Date : 11/7/23                        */
/* This program calculates triangle area */
/*                                       */
/*****************************************/

#include<stdio.h>

void getData(float *length, float *height);
float trigArea(float length, float height);
void displayData(float length, float height, float area);

int main(){
    //Declaration
    float length, height, area;

    //Data/Input
    getData(&length, &height);

    //Calculations
    area = trigArea(length, height);

    //Output
    displayData(length, height, area);

    return 0;
}

void getData(float *length, float *height){
    //Input
    printf("Length of Triangle: ");
    scanf("%f", length);
    printf("Perpendicular Height of Triangle: ");
    scanf("%f", height);
}

float trigArea(float length, float height){
    //Declaration
    float area;

    //Calculations
    area = length * height * 0.5;

    //Output
    return area;
}

void displayData(float length, float height, float area){
    //Output
    printf("Triangle Length = %.2f\n", length);
    printf("Triangle Height = %.2f\n", height);
    printf("Triangle Area = %.2f\n", area);
}

/*
Test Run 1
Length of Triangle: 5
Perpendicular Height of Triangle: 5
Triangle Length = 5.00
Triangle Height = 5.00
Triangle Area = 12.50

Test Run 2
Length of Triangle: 4
Perpendicular Height of Triangle: 4
Triangle Length = 4.00
Triangle Height = 4.00
Triangle Area = 8.00

Test Run 3
Length of Triangle: 3
Perpendicular Height of Triangle: 3
Triangle Length = 3.00
Triangle Height = 3.00
Triangle Area = 4.50
*/
