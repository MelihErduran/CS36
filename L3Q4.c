/*****************************************/
/* Lab 3 Question 4                      */
/* Name : Melih Erduran                  */
/* Student ID : 1252917                  */
/* Date : 11/7/23                        */
/* This program calculates triangle area */
/*                                       */
/*****************************************/

#include<stdio.h>
float get_sales();
float get_advanced_pay();
float determine_comm_rate(float sales);

int main()
{
    //declaration
    double sales, advanced_pay, comm_rate, pay;

    //call functions
    sales = get_sales();
    advanced_pay = get_advanced_pay();
    comm_rate = determine_comm_rate(sales);

    //calculations
    pay = sales * comm_rate - advanced_pay;

    //output
    printf("The pay is $%.2f", pay);

    if (pay < 0)
    {
        printf("\nThe salesperson must reimburse the company.");
    }

    return 0;
}

float get_sales(){
    //Declaration
    float sales;

    //Data/Input
    printf("Enter the monthly sales: ");
    scanf("%f", &sales);

    //Output
    return sales;
}

float get_advanced_pay(){
    //Declaration
    float advancedPay;

    //Data/Input
    printf("Enter the amount of advanced pay, or enter 0 if no advanced pay was given.");
    printf("\nAdvanced Pay: ");
    scanf("%f", &advancedPay);

    //Output
    return advancedPay;
}

float determine_comm_rate(float sales){
    //Declaration
    float commRate;

    //Calculations
    if (sales > 21999.99) {
        commRate = 0.18;
    } else if (sales > 18000.00){
        commRate = 0.16;
    } else if (sales > 15000.00){
        commRate = 0.14;
    } else if (sales > 10000.00){
        commRate = 0.12;
    } else {
        commRate = 0.10;
    }

    //Output
    return commRate;
}

/*
Test Run 1
Enter the monthly sales: 14550.00
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced Pay: 1000.00
The pay is $746.00

Test Run 2
Enter the monthly sales: 9500
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced Pay: 0
The pay is $950.00

Test Run 3
Enter the monthly sales: 12000.00
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced Pay: 2000.00
The pay is $-560.00
The salesperson must reimburse the company.
*/
