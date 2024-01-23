/*************************************************************************/
/* Lab 2 Question 1                                                      */
/* Name : Melih Erduran                                                  */
/* Student ID : 1252917                                                  */
/* Date : 10/10/23                                                       */
/* This program checks whether user-inputted character is a vowel or not */
/*                                                                       */
/*************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    char userLetter;

    //Data/Input
    printf("Enter any character : ");
    scanf("%c", &userLetter);

    //Processing & Output
    if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u' || userLetter == 'A' || userLetter == 'E' || userLetter == 'I' || userLetter == 'O' || userLetter == 'U'){
        printf("%c is a vowel", userLetter);
    } else {
        printf("%c is not a vowel", userLetter);
    }

    return 0;
}

/*
Test Run 1
Enter any character : h
h is not a vowel

Test Run 2
Enter any character : i
i is a vowel
*/
