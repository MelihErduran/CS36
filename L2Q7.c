/**********************************************************************************************************************/
/* Lab 2 Question 6                                                                                                   */
/* Name : Melih Erduran                                                                                               */
/* Student ID : 1252917                                                                                               */
/* Date : 10/10/23                                                                                                    */
/* This program reads user numbers until -1 is encountered. Counts positive, negative, and zeroes entered by the user */
/*                                                                                                                    */
/**********************************************************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int numberM, numberN, sum;
    sum = 0;

    //Data/Input
    printf("Enter the value of m : ");
    scanf("%d", &numberM);
    printf("Enter the value of n : ");
    scanf("%d", &numberN);

    //Processing
    while (numberM <= numberN) {
        sum += numberM;
        numberM++;
    }

    //Output
    printf("Sum = %d", sum);

    return 0;
}

/*
Test Run 1
Enter the value of m : 7
Enter the value of n : 11
Sum = 45

Test Run 2
Enter the value of m : 6
Enter the value of n : 9
Sum = 30

Test Run 3
Enter the value of m : 4
Enter the value of n : 20
Sum = 204
*/
