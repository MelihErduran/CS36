/********************************************************************************************/
/* Lab 2 Question 2                                                                         */
/* Name : Melih Erduran                                                                     */
/* Student ID : 1252917                                                                     */
/* Date : 10/10/23                                                                          */
/* This program checks whether user-inputted character is a uppercase, lowercase, or a digit*/
/*                                                                                          */
/********************************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    char userInput;

    //Data/Input
    printf("Enter any character : ");
    scanf("%c", &userInput);

    //Processing & Output
    if (userInput >= '0' && userInput <= '9'){
        printf("A digit was entered");
    } else {
        if (userInput >= 'A' && userInput <= 'Z'){
            printf("Uppercase character was entered");
        } else {
            printf("Lowercase Character was entered");
        }
    }

    return 0;
}

/*
Test Run 1
Enter any character : C
Uppercase character was entered

Test Run 2
Enter any character : b
Lowercase Character was entered

Test Run 3
Enter any character : 5
A digit was entered
*/
