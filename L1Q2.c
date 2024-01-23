/*******************************************************************/
/*Lab 1 Question 2                                                 */
/*Name : Melih Erduran                                             */
/*Student ID : 1252917                                             */
/*Date : 09/06/23                                                  */
/*This program gets two user integers and does multiple operations */
/*                                                                 */
/*******************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int num1, num2, sum, product, difference, remainder, quotient;

    //Data/input
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    //Processing/Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / (float)num2;
    remainder = num1 % num2;

    //Output
    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The difference is %d\n", difference);
    printf("The quotient is %d\n", quotient);
    printf("The remainder is %d\n", remainder);

    return 0;
}

/*
Test run 1
Enter two numbers: 20 5
The sum is 25
The product is 100
The difference is 15
The quotient is 4
The remainder is 0

Test run 2
Enter two numbers: 5 20
The sum is 25
The product is 100
The difference is -15
The quotient is 0
The remainder is 5

Test run 3
Enter two numbers: 2 6
The sum is 8
The product is 12
The difference is -4
The quotient is 0
The remainder is 2
*/
