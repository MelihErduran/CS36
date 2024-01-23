/********************************************************************/
/* Homework 1 Program Set 1                                         */
/* Name : Melih Erduran                                             */
/* Student ID : 1252917                                             */
/* Date : 09/07/23                                                  */
/* This program calculates the value of the users coins             */
/*                                                                  */
/********************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    char initial1, initial2, initial3;
    int quarters, dimes, nickels, pennies, dollars, cents;


    //Data/Input
    printf("Enter your initials, first, middle and last: ");
    scanf("%c%c%c", &initial1, &initial2, &initial3);

    getchar();
    printf("\n");
    printf("Hello %c.%c.%c., let's see what your coins are worth.\n", initial1, initial2, initial3);

    printf("Enter number of quarters: ");
    scanf("%d", &quarters);
    printf("Enter number of dimes: ");
    scanf("%d", &dimes);
    printf("Enter number of nickels: ");
    scanf("%d", &nickels);
    printf("Enter number of pennies: ");
    scanf("%d", &pennies);

    //Processing/Calculations
    dollars = ((quarters * 25) + (dimes * 10) + (nickels * 5) + pennies) / 100;
    cents = ((quarters * 25) + (dimes * 10) + (nickels * 5) + pennies) % 100;

    //Output
    printf("\n");
    printf("Number of quarters is %d.\n", quarters);
    printf("Number of dimes is %d.\n", dimes);
    printf("Number of nickels is %d.\n", nickels);
    printf("Number of pennies is %d.\n", pennies);
    printf("\n");
    printf("Your coins are worth %d dollars and %d cents.", dollars, cents);

    return 0;
}

//Test Run 1
//Enter your initials, first, middle and last: JTK

//Hello J.T.K., let's see what your coins are worth.
//Enter number of quarters: 4
//Enter number of dimes: 0
//Enter number of nickels: 0
//Enter number of pennies: 0

//Number of quarters is 4.
//Number of dimes is 0.
//Number of nickels is 0.
//Number of pennies is 0.

//Your coins are worth 1 dollars and 0 cents.

//Test Run 2
//Enter your initials, first, middle and last: RHT

//Hello R.H.T., let's see what your coins are worth.
//Enter number of quarters: 0
//Enter number of dimes: 10
//Enter number of nickels: 0
//Enter number of pennies: 0

//Number of quarters is 0.
//Number of dimes is 10.
//Number of nickels is 0.
//Number of pennies is 0.

//Your coins are worth 1 dollars and 0 cents.

//Test Run 3
//Enter your initials, first, middle and last: EDE

//Hello E.D.E., let's see what your coins are worth.
//Enter number of quarters: 32
//Enter number of dimes: 1
//Enter number of nickels: 3
//Enter number of pennies: 7

//Number of quarters is 32.
//Number of dimes is 1.
//Number of nickels is 3.
//Number of pennies is 7.

//Your coins are worth 8 dollars and 32 cents.

//Test Run 4
//Enter your initials, first, middle and last: JHU

//Hello J.H.U., let's see what your coins are worth.
//Enter number of quarters: 3
//Enter number of dimes: 2
//Enter number of nickels: 0
//Enter number of pennies: 4

//Number of quarters is 3.
//Number of dimes is 2.
//Number of nickels is 0.
//Number of pennies is 4.

//Your coins are worth 0 dollars and 99 cents.

//Test Run 5
//Enter your initials, first, middle and last: MMM

//Hello M.M.M., let's see what your coins are worth.
//Enter number of quarters: 5
//Enter number of dimes: 5
//Enter number of nickels: 5
//Enter number of pennies: 4

//Number of quarters is 5.
//Number of dimes is 5.
//Number of nickels is 5.
//Number of pennies is 4.

//Your coins are worth 2 dollars and 4 cents.
