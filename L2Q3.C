/*******************************************************************************************/
/* Lab 2 Question 3                                                                        */
/* Name : Melih Erduran                                                                    */
/* Student ID : 1252917                                                                    */
/* Date : 10/10/23                                                                         */
/* This program checks whether user-inputted number is positive, negative, or equal to zero*/
/*                                                                                         */
/********************************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int userNumber;

    //Data/Input
    printf("Enter any number: ");
    scanf("%d", &userNumber);

    //Processing & Output
    if (userNumber > 0){
        printf("The number is positive");
    } else if (userNumber < 0){
		printf("The number is negative");
    } else {
		printf("The number is equal to 0");
	}

    return 0;
}

/*
Test Run 1
Enter any number: 0
The number is equal to 0

Test Run 2
Enter any number: 15
The number is positive

Test Run 3
Enter any number: -25
The number is negative
*/
