/***************************************************/
/* Lab 3 Question 1                                */
/* Name : Melih Erduran                            */
/* Student ID : 1252917                            */
/* Date : 11/7/23                                  */
/* This program prints information using functions */
/*                                                 */
/***************************************************/

#include <stdio.h>

void texas();
void California();

int main(){
    //Output
    texas();
    California();

    return 0;
}

void texas(){
    //Declaration & Data
    int birds = 5000;

    //Output
    printf("Texas has %d birds\n", birds);
}

void California(){
    //Declaration & Data
    int birds = 8000;

    //Output
    printf("California has %d birds\n", birds);
}

/*
Test Run 1


*/
