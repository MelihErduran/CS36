/**************************************************/
/*Name */
/*Student ID */
/*Date */
/*This Program Finds Sum and Average of 3 numbers */
/* */
/**************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int a, b, c, sum;
    float avg;

    //Data/input
    a = 10;
    b = 25;
    c = 30;

    //Processing/Calculations
    sum = a + b + c;
    avg = sum /(float) 3;

    //Output
    printf("The sum for %d %d %d is\n", a ,b ,c);
    printf("The sum is %d\n", sum);
    printf("The average is %f\n", avg);

    return 0;
}
