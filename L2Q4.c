/*************************************************************************/
/* Lab 2 Question 4                                                      */
/* Name : Melih Erduran                                                  */
/* Student ID : 1252917                                                  */
/* Date : 10/10/23                                                       */
/* This program checks whether user-inputted character  is a vowel or not*/
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
   switch(userLetter) {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
           printf("%c is a vowel", userLetter);
           break;
    default:
        printf("%c is not a vowel", userLetter);

   }
    return 0;
}

/*
Test Run 1
Enter any character : b
b is not a vowel

Test Run 2
Enter any character : B
B is not a vowel

Test Run 3
Enter any character : e
e is a vowel
*/
