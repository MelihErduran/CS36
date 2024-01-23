/***********************************************/
/* Lab 3 Question 2                            */
/* Name : Melih Erduran                        */
/* Student ID : 1252917                        */
/* Date : 11/7/23                              */
/* This program calculates and prints interest */
/*                                             */
/***********************************************/

#include <stdio.h>

double show_interest(double principal, double rate, double periods);

int main(){
    //Declaration
    float principal, rate, periods, interest;

    //Input
    printf("Please input the principal amount, rate, and period(in years): ");
    scanf("%f %f %f", &principal, &rate, &periods);

    //Calculations
    interest = show_interest(principal, rate, periods);

    printf("The simple interest will be $%.2f", interest);

    return 0;
}

double show_interest(double principal, double rate, double periods){
    //Declaration
    float interest;

    //Calculations
    interest = principal * rate * periods;

    //Output
    return interest;
}

/*
Test Run 1
Please input the principal amount, rate, and period(in years): 10000 .1 1
The simple interest will be $1000.00

Test Run 2
Please input the principal amount, rate, and period(in years): 1000 .1 1
The simple interest will be $100.00

Test Run 3

*/
