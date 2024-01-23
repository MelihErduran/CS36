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
    int userNum, negativeNum, positiveNum, zeroNum;
    negativeNum = positiveNum = zeroNum = 0;

    //Data/Input
    printf("Enter any number , -1 to quit : ");
    scanf("%d", &userNum);

    //Processing
    while (userNum != -1) {
        if (userNum > 0) {
            positiveNum++;
        } else if (userNum < 0) {
            negativeNum++;
        } else {
            zeroNum++;
        }
        printf("Enter any number , -1 to quit : ");
        scanf("%d", &userNum);
    }

    //Output
    printf("Count of positive numbers entered = %d\n", positiveNum);
    printf("Count of negative numbers entered = %d\n", negativeNum);
    printf("Count of zeroes numbers entered = %d\n", zeroNum);

    return 0;
}

/*
Test Run 1
Enter any number , -1 to quit : -12
Enter any number , -1 to quit : 108
Enter any number , -1 to quit : -24
Enter any number , -1 to quit : 0
Enter any number , -1 to quit : -23
Enter any number , -1 to quit : -1
Count of positive numbers entered = 1
Count of negative numbers entered = 3
Count of zeroes numbers entered = 1

Test Run 2
Enter any number , -1 to quit : 124
Enter any number , -1 to quit : 45
Enter any number , -1 to quit : 6
Enter any number , -1 to quit : 7
Enter any number , -1 to quit : 3
Enter any number , -1 to quit : 2
Enter any number , -1 to quit : -10000
Enter any number , -1 to quit : -12
Enter any number , -1 to quit : -123
Enter any number , -1 to quit : 0
Enter any number , -1 to quit : 0
Enter any number , -1 to quit : 0
Enter any number , -1 to quit : -1
Count of positive numbers entered = 6
Count of negative numbers entered = 3
Count of zeroes numbers entered = 3

Test Run 3
Enter any number , -1 to quit : -1
Count of positive numbers entered = 0
Count of negative numbers entered = 0
Count of zeroes numbers entered = 0
*/
