/********************************************************************/
/* Homework 2 Program Set 1                                         */
/* Name : Melih Erduran                                             */
/* Student ID : 1252917                                             */
/* Date : 10/10/23                                                  */
/* This program calculates tax due from filing status and income    */
/*                                                                  */
/********************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int status;
    float taxableIncome, taxesOwed;

    //Data/Input
    printf("************Menu****************\n");
    printf("1) Single\n");
    printf("2) Married Filing Jointly\n");
    printf("3) Married Filing Separately\n");
    printf("4) Head of Household\n");
    printf("5) Exit\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("Enter status : ");
    scanf("%d", &status);

    //Processing & Output
    switch(status){
        case 1:
            printf("Enter your taxable TI: $");
            scanf("%f", &taxableIncome);
            if (taxableIncome > 263750){
                taxesOwed = 84020.50 + (0.396 * (taxableIncome - 263750.00));
            } else if (taxableIncome > 121300){
                taxesOwed = 32738.50 + (0.36 * (taxableIncome - 121300.00));
            } else if (taxableIncome > 58000) {
                taxesOwed = 13162 + (0.31 * (taxableIncome - 58000.00));
            } else if (taxableIncome > 24000) {
                taxesOwed = 3600 + (0.28 * (taxableIncome - 24000.00));
            } else {
                taxesOwed = 0.15 * taxableIncome;
            }
            printf("\n");
            printf("The taxes owed are: $%.2f", taxesOwed);
            break;

        case 2:
            printf("Enter your taxable TI: $");
            scanf("%f", &taxableIncome);
            if (taxableIncome > 263750){
                taxesOwed = 79445.50 + (0.396 * (taxableIncome - 263750.00));
            } else if (taxableIncome > 147700){
                taxesOwed = 37667.50 + (0.36 * (taxableIncome - 147700.00));
            } else if (taxableIncome > 96900) {
                taxesOwed = 21919 + (0.31 * (taxableIncome - 96900.00));
            } else if (taxableIncome > 40100) {
                taxesOwed = 6015 + (0.28 * (taxableIncome - 40100.00));
            } else {
                taxesOwed = 0.15 * taxableIncome;
            }
            printf("\n");
            printf("The taxes owed are: $%.2f", taxesOwed);
            break;

        case 3:
            printf("Enter your taxable TI: $");
            scanf("%f", &taxableIncome);
            if (taxableIncome > 131875){
                taxesOwed = 39722.50 + (0.396 * (taxableIncome - 131875));
            } else if (taxableIncome > 73850){
                taxesOwed = 18833.50 + (0.36 * (taxableIncome - 73850));
            } else if (taxableIncome > 48450) {
                taxesOwed = 10959.50 + (0.31 * (taxableIncome - 48450));
            } else if (taxableIncome > 20050) {
                taxesOwed = 3007.50 + (0.28 * (taxableIncome - 20050.00));
            } else {
                taxesOwed = 0.15 * taxableIncome;
            }
            printf("\n");
            printf("The taxes owed are: $%.2f", taxesOwed);
            break;

        case 4:
            printf("Enter your taxable TI: $");
            scanf("%f", &taxableIncome);
            if (taxableIncome > 263750){
                taxesOwed = 81554 + (0.396 * (taxableIncome - 263750));
            } else if (taxableIncome > 134500){
                taxesOwed = 35074 + (0.36 * (taxableIncome - 134500));
            } else if (taxableIncome > 83050) {
                taxesOwed = 19074.50 + (0.31 * (taxableIncome - 83050));
            } else if (taxableIncome > 32150) {
                taxesOwed = 4822.50 + (0.28 * (taxableIncome - 32150.00));
            } else {
                taxesOwed = 0.15 * taxableIncome;
            }
            printf("\n");
            printf("The taxes owed are: $%.2f", taxesOwed);
            break;

        case 5:
            printf("\n");
            printf("Exit program...");
            break;

        default:
            printf("\n");
            printf("You entered a wrong status. Program Exit . . .");
            break;
    }

    return 0;
}

/*
Test Run 1
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 1
Enter your taxable TI: $50000
The taxes owed are: $10880.00

Test Run 2
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 5

Exit program...

Test Run 3
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : a

You entered a wrong status. Program Exit . . .

Test Run 4
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 7

You entered a wrong status. Program Exit . . .

Test Run 5
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 2
Enter your taxable TI: $76000

The taxes owed are: $16067.00

Test Run 6
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 4
Enter your taxable TI: $81000

The taxes owed are: $18500.50

Test Run 7
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 2
Enter your taxable TI: $230000

The taxes owed are: $67295.50

Test Run 8
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 2
Enter your taxable TI: $290000

The taxes owed are: $89840.50
*/
