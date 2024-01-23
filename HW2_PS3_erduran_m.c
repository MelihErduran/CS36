/**************************************************************************/
/* Homework 2 Program Set 3                                               */
/* Name : Melih Erduran                                                   */
/* Student ID : 1252917                                                   */
/* Date : 10/10/23                                                        */
/* This program calculates a salary raise a user-inputted amount of times */
/*                                                                        */
/**************************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int howMany;
    float salary, raise, totalRaise, totalOld, totalNew, newSalary, rate;
    newSalary = totalNew = totalOld = totalRaise = 0;

    //Input
    printf("How many salaries do you want to enter? ");
    scanf("%d", &howMany);
    printf("\n");
    printf("                      Salary         Rate    Raise     New Salary\n");
    printf("-----------------------------------------------------------------\n");

    //Processing
     for (int i = 1; i <= howMany; i++) {
        printf("Salary : ");
        scanf("%f", &salary);
        if (salary > 40000) {
            rate = 4.00;
            totalOld += salary;
            raise = (salary * 0.04);
            newSalary = raise + salary;
            totalNew += newSalary;
            totalRaise += raise;
            printf("                    %10.2f %10.2f %10.2f %10.2f\n", salary,rate,raise,newSalary);
        } else if (salary > 30000) {
            rate = 5.5;
            totalOld += salary;
            raise = (salary * 0.055);
            newSalary = raise + salary;
            totalNew += newSalary;
            totalRaise += raise;
            printf("                    %10.2f %10.2f %10.2f %10.2f\n", salary,rate,raise,newSalary);
        } else {
            rate = 7.00;
            totalOld += salary;
            raise = (salary * 0.07);
            newSalary = raise + salary;
            totalNew += newSalary;
            totalRaise += raise;
            printf("                    %10.2f %10.2f %10.2f %10.2f\n", salary,rate,raise,newSalary);
        }
    }

    //Output
    printf("-----------------------------------------------------------------\n");
    printf("Total               %10.2f            %10.2f %10.2f\n",totalOld,totalRaise,totalNew);

    return 0;
}

/*
Test Run 1
How many salaries do you want to enter? 4

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 25000
                      25000.00       7.00    1750.00   26750.00
Salary : 30000
                      30000.00       7.00    2100.00   32100.00
Salary : 35000
                      35000.00       5.50    1925.00   36925.00
Salary : 40000
                      40000.00       5.50    2200.00   42200.00
-----------------------------------------------------------------
Total                130000.00               7975.00  137975.00

Test Run 2
How many salaries do you want to enter? 6

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 10000
                      10000.00       7.00     700.00   10700.00
Salary : 20000
                      20000.00       7.00    1400.00   21400.00
Salary : 30000
                      30000.00       7.00    2100.00   32100.00
Salary : 40000
                      40000.00       5.50    2200.00   42200.00
Salary : 50000
                      50000.00       4.00    2000.00   52000.00
Salary : 60000
                      60000.00       4.00    2400.00   62400.00
-----------------------------------------------------------------
Total                210000.00              10800.00  220800.00

Test Run 3
How many salaries do you want to enter? 5

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 50000
                      50000.00       4.00    2000.00   52000.00
Salary : 40000
                      40000.00       5.50    2200.00   42200.00
Salary : 30000
                      30000.00       7.00    2100.00   32100.00
Salary : 20000
                      20000.00       7.00    1400.00   21400.00
Salary : 10000
                      10000.00       7.00     700.00   10700.00
-----------------------------------------------------------------
Total                150000.00               8400.00  158400.00
*/
