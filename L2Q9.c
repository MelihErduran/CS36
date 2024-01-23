/************************************************************************/
/* Lab 2 Question 9                                                     */
/* Name : Melih Erduran                                                 */
/* Student ID : 1252917                                                 */
/* Date : 10/10/23                                                      */
/* This program prints a pattern according to a user-inputted base size */
/*                                                                      */
/************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int baseSize;

    //Data/Input
    printf("Enter base size of the triangle for pattern : ");
    scanf("%d", &baseSize);
    printf("\n");

    //Processing & Output
    for (int i = 0; i < baseSize; i++) {
        int currentNum = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d", currentNum);
            currentNum++;
        }
        printf("\n");
    }

    return 0;
}

/*
Test Run 1
Enter base size of the triangle for pattern : 5

1
12
123
1234
12345

Test Run 2
Enter base size of the triangle for pattern : 9

1
12
123
1234
12345
123456
1234567
12345678
123456789

Test Run 3
Enter base size of the triangle for pattern : 3

1
12
123
*/
