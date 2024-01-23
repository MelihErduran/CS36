/********************************************************************/
/* Homework 1 Program Set 2                                         */
/* Name : Melih Erduran                                             */
/* Student ID : 1252917                                             */
/* Date : 09/07/23                                                  */
/* This program calculates the profit a user makes on stocks        */
/*                                                                  */
/********************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int shares;
    float initial_cost, current_price, yearly_fees, profit, total_profit;
    char stk_name[12];


    //Data/Input
    printf("*********************************\n");
    printf("             Stock 1             \n");
    printf("*********************************\n");

    printf("Enter stock name ");
    gets(stk_name);
    printf("Enter number of shares ");
    scanf("%d", &shares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f %f %f", &initial_cost, &current_price, &yearly_fees);


    //Processing/Calculations
    printf("\n");
    printf("The Stock name is    : %s\n", stk_name);
    printf("The number of shares : %11d\n", shares);
    printf("The buy price is     : $%10.2f\n", initial_cost);
    printf("The current price is : $%10.2f\n", current_price);
    printf("The fees are         : $%10.2f\n", yearly_fees);

    initial_cost = initial_cost * shares;
    current_price = current_price * shares;
    profit = current_price - initial_cost - yearly_fees;
    total_profit = profit;

    //Output
    printf("\n");
    printf("The initial cost is :  $%10.2f\n", initial_cost);
    printf("The current cost is :  $%10.2f\n", current_price);
    printf("The profit is       :  $%10.2f\n", profit);

    //Stock 2
    //Data/Input
    getchar();
    printf("\n");
    printf("*********************************\n");
    printf("             Stock 2             \n");
    printf("*********************************\n");

    printf("Enter stock name ");
    gets(stk_name);
    printf("Enter number of shares ");
    scanf("%d", &shares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f %f %f", &initial_cost, &current_price, &yearly_fees);


    //Processing/Calculations
    printf("\n");
    printf("The Stock name is    : %s\n", stk_name);
    printf("The number of shares : %11d\n", shares);
    printf("The buy price is     : $%10.2f\n", initial_cost);
    printf("The current price is : $%10.2f\n", current_price);
    printf("The fees are         : $%10.2f\n", yearly_fees);

    initial_cost = initial_cost * shares;
    current_price = current_price * shares;
    profit = current_price - initial_cost - yearly_fees;
    total_profit = total_profit + profit;

    //Output
    printf("\n");
    printf("The initial cost is :  $%10.2f\n", initial_cost);
    printf("The current cost is :  $%10.2f\n", current_price);
    printf("The profit is       :  $%10.2f\n", profit);

    //Stock 3
    //Data/Input
    getchar();
    printf("\n");
    printf("*********************************\n");
    printf("             Stock 3             \n");
    printf("*********************************\n");

    printf("Enter stock name ");
    gets(stk_name);
    printf("Enter number of shares ");
    scanf("%d", &shares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f %f %f", &initial_cost, &current_price, &yearly_fees);


    //Processing/Calculations
    printf("\n");
    printf("The Stock name is    : %s\n", stk_name);
    printf("The number of shares : %11d\n", shares);
    printf("The buy price is     : $%10.2f\n", initial_cost);
    printf("The current price is : $%10.2f\n", current_price);
    printf("The fees are         : $%10.2f\n", yearly_fees);

    initial_cost = initial_cost * shares;
    current_price = current_price * shares;
    profit = current_price - initial_cost - yearly_fees;
    total_profit = total_profit + profit;

    //Output
    printf("\n");
    printf("The initial cost is :  $%10.2f\n", initial_cost);
    printf("The current cost is :  $%10.2f\n", current_price);
    printf("The profit is       :  $%10.2f\n", profit);

    //Stock 4
    //Data/Input
    getchar();
    printf("\n");
    printf("*********************************\n");
    printf("             Stock 4             \n");
    printf("*********************************\n");

    printf("Enter stock name ");
    gets(stk_name);
    printf("Enter number of shares ");
    scanf("%d", &shares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f %f %f", &initial_cost, &current_price, &yearly_fees);


    //Processing/Calculations
    printf("\n");
    printf("The Stock name is    : %s\n", stk_name);
    printf("The number of shares : %11d\n", shares);
    printf("The buy price is     : $%10.2f\n", initial_cost);
    printf("The current price is : $%10.2f\n", current_price);
    printf("The fees are         : $%10.2f\n", yearly_fees);

    initial_cost = initial_cost * shares;
    current_price = current_price * shares;
    profit = current_price - initial_cost - yearly_fees;
    total_profit = total_profit + profit;

    //Output
    printf("\n");
    printf("The initial cost is :  $%10.2f\n", initial_cost);
    printf("The current cost is :  $%10.2f\n", current_price);
    printf("The profit is       :  $%10.2f\n", profit);

    //Stock 5
    //Data/Input
    getchar();
    printf("\n");
    printf("*********************************\n");
    printf("             Stock 5             \n");
    printf("*********************************\n");

    printf("Enter stock name ");
    gets(stk_name);
    printf("Enter number of shares ");
    scanf("%d", &shares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f %f %f", &initial_cost, &current_price, &yearly_fees);


    //Processing/Calculations
    printf("\n");
    printf("The Stock name is    : %s\n", stk_name);
    printf("The number of shares : %11d\n", shares);
    printf("The buy price is     : $%10.2f\n", initial_cost);
    printf("The current price is : $%10.2f\n", current_price);
    printf("The fees are         : $%10.2f\n", yearly_fees);

    initial_cost = initial_cost * shares;
    current_price = current_price * shares;
    profit = current_price - initial_cost - yearly_fees;
    total_profit = total_profit + profit;

    //Output
    printf("\n");
    printf("The initial cost is :  $%10.2f\n", initial_cost);
    printf("The current cost is :  $%10.2f\n", current_price);
    printf("The profit is       :  $%10.2f\n", profit);
    printf("\n");
    printf("The total profit for the 5 stocks is : $%10.2f", total_profit);

    return 0;
}

//Test Run 1
//*********************************
//             Stock 1
//*********************************
//Enter stock name IBM CORP
//Enter number of shares 155
//Enter the buy price, current price, fees 15.33 13.33 5.00

//The Stock name is    : IBM CORP
//The number of shares :         155
//The buy price is     : $     15.33
//The current price is : $     13.33
//The fees are         : $      5.00

//The initial cost is :  $   2376.15
//The current cost is :  $   2066.15
//The profit is       :  $   -315.00

//*********************************
//             Stock 2
//*********************************
//Enter stock name ORACLE SYS
//Enter number of shares 375
//Enter the buy price, current price, fees 11.77 12.25 3.50

//The Stock name is    : ORACLE SYS
//The number of shares :         375
//The buy price is     : $     11.77
//The current price is : $     12.25
//The fees are         : $      3.50

//The initial cost is :  $   4413.75
//The current cost is :  $   4593.75
//The profit is       :  $    176.50

//*********************************
//             Stock 3
//*********************************
//Enter stock name SUN MICRO
//Enter number of shares 350
//Enter the buy price, current price, fees 27.55 35.75 12.25

//The Stock name is    : SUN MICRO
//The number of shares :         350
//The buy price is     : $     27.55
//The current price is : $     35.75
//The fees are         : $     12.25

//The initial cost is :  $   9642.50
//The current cost is :  $  12512.50
//The profit is       :  $   2857.75

//*********************************
//             Stock 4
//*********************************
//Enter stock name LINKSYS INC
//Enter number of shares 85
//Enter the buy price, current price, fees 25.35 23.34 6.00

//The Stock name is    : LINKSYS INC
//The number of shares :          85
//The buy price is     : $     25.35
//The current price is : $     23.34
//The fees are         : $      6.00

//The initial cost is :  $   2154.75
//The current cost is :  $   1983.90
//The profit is       :  $   -176.85

//*********************************
//             Stock 5
//*********************************
//Enter stock name CISCO INC
//Enter number of shares 50
//Enter the buy price, current price, fees 45.36 50.86 1.50

//The Stock name is    : CISCO INC
//The number of shares :          50
//The buy price is     : $     45.36
//The current price is : $     50.86
//The fees are         : $      1.50

//The initial cost is :  $   2268.00
//The current cost is :  $   2543.00
//The profit is       :  $    273.50

//The total profit for the 5 stocks is : $   2815.90
