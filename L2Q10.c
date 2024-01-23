/**************************************************************************************/
/* Lab 2 Question 10                                                                  */
/* Name : Melih Erduran                                                               */
/* Student ID : 1252917                                                               */
/* Date : 10/10/23                                                                    */
/* This program prints a pattern according to a user-inputted highest alphabet letter */
/*                                                                                    */
/**************************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    char highestAlphabet;

    //Data/Input
    printf("Enter highest alphabet : ");
    scanf("%c", &highestAlphabet);

    //Processing & Output
    for (char i = 'A'; i <= highestAlphabet; i++) {
        char currentLetter = 'A';
        for (char j = 'A'; j <= i; j++) {
            printf("%c", currentLetter);
            currentLetter++;
        }
        printf("\n");
    }

    return 0;
}

/*
Test Run 1
Enter highest alphabet : F
A
AB
ABC
ABCD
ABCDE
ABCDEF

Test Run 2
Enter highest alphabet : Z
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ
ABCDEFGHIJK
ABCDEFGHIJKL
ABCDEFGHIJKLM
ABCDEFGHIJKLMN
ABCDEFGHIJKLMNO
ABCDEFGHIJKLMNOP
ABCDEFGHIJKLMNOPQ
ABCDEFGHIJKLMNOPQR
ABCDEFGHIJKLMNOPQRS
ABCDEFGHIJKLMNOPQRST
ABCDEFGHIJKLMNOPQRSTU
ABCDEFGHIJKLMNOPQRSTUV
ABCDEFGHIJKLMNOPQRSTUVW
ABCDEFGHIJKLMNOPQRSTUVWX
ABCDEFGHIJKLMNOPQRSTUVWXY
ABCDEFGHIJKLMNOPQRSTUVWXYZ

Test Run 3
Enter highest alphabet : O
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ
ABCDEFGHIJK
ABCDEFGHIJKL
ABCDEFGHIJKLM
ABCDEFGHIJKLMN
ABCDEFGHIJKLMNO
*/
