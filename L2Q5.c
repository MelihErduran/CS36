/**************************************************************************/
/* Lab 2 Question 5                                                       */
/* Name : Melih Erduran                                                   */
/* Student ID : 1252917                                                   */
/* Date : 10/10/23                                                        */
/* This program checks whether user-inputted is even, odd, or out of range*/
/*                                                                        */
/**************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int userNum;

    //Data/Input
    printf("Enter a number between 1 to 10 : ");
    scanf("%d", &userNum);

    //Processing & Output
   switch(userNum) {
       case 1:
       case 3:
       case 5:
       case 7:
       case 9:
           printf("You entered %d. That is an odd number.", userNum);
           break;
       case 2:
       case 4:
       case 6:
       case 8:
       case 10:
           printf("You entered %d. That is an even number.", userNum);
           break;
    default:
        printf("Number entered is outside the range.");

   }
    return 0;
}

/*
Test Run 1
Enter a number between 1 to 10 : 5
You entered 5. That is an odd number.

Test Run 2
Enter a number between 1 to 10 : 12
Number entered is outside the range.

Test Run 3
Enter a number between 1 to 10 : 8
You entered 8. That is an even number.
*/
