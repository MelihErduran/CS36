/************************************************************************/
/* Lab 2 Question 8                                                     */
/* Name : Melih Erduran                                                 */
/* Student ID : 1252917                                                 */
/* Date : 10/10/23                                                      */
/* This program displays the square and cube of first n natural numbers */
/*                                                                      */
/************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int numberN, square, cube, counter;
    square = cube = 0;
    counter = 1;

    //Data/Input
    printf("Enter the value of n : ");
    scanf("%d", &numberN);
    printf("\n");
    printf("-----------------------------------------------\n");

    //Processing & Output
    do{
        square = counter * counter;
        cube = counter * counter * counter;
        printf("|       %-6d|       %-9d|      %-8d|\n", counter, square, cube);
        counter++;
    } while (counter <= numberN);
    printf("-----------------------------------------------\n");

    return 0;
}

/*
Test Run 1
-----------------------------------------------
|       1     |       1        |      1       |
|       2     |       4        |      8       |
|       3     |       9        |      27      |
|       4     |       16       |      64      |
-----------------------------------------------

Test Run 2
-----------------------------------------------
|       1     |       1        |      1       |
|       2     |       4        |      8       |
|       3     |       9        |      27      |
|       4     |       16       |      64      |
|       5     |       25       |      125     |
|       6     |       36       |      216     |
-----------------------------------------------

Test Run 3
-----------------------------------------------
|       1     |       1        |      1       |
|       2     |       4        |      8       |
|       3     |       9        |      27      |
|       4     |       16       |      64      |
|       5     |       25       |      125     |
|       6     |       36       |      216     |
|       7     |       49       |      343     |
|       8     |       64       |      512     |
|       9     |       81       |      729     |
|       10    |       100      |      1000    |
-----------------------------------------------
*/
