/*************************************************************************************************/
/* Lab 1 Question 6                                                                              */
/* Name : Melih Erduran                                                                          */
/* Student ID : 1252917                                                                          */
/* Date: 09/06/23                                                                                */
/* This program gets a user-inputted dollar amount and outputs the least amount of bills required*/
/*************************************************************************************************/

#include <stdio.h>

int main()
{
    //Declaration
    int dollar_amnt, twenties, tens, fives, ones;

    //Data/Input
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amnt);

    //Processing/Calculations
    twenties = dollar_amnt / 20;
    dollar_amnt = dollar_amnt % 20;
    tens = dollar_amnt / 10;
    dollar_amnt = dollar_amnt % 10;
    fives = dollar_amnt / 5;
    dollar_amnt = dollar_amnt % 5;
    ones = dollar_amnt;

    //Output
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$ 5 bills: %d\n", fives);
    printf("$ 1 bills: %d\n", ones);

    return 0;
}

/*
Test run 1
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$ 5 bills: 0
$ 1 bills: 3

Test run 2
Enter a dollar amount: 80
$20 bills: 4
$10 bills: 0
$ 5 bills: 0
$ 1 bills: 0

Test run 3
Enter a dollar amount: 35
$20 bills: 1
$10 bills: 1
$ 5 bills: 1
$ 1 bills: 0
*/
