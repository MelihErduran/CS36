/***********************************************************************/
/* Homework 2 Program Set 2                                            */
/* Name : Melih Erduran                                                */
/* Student ID : 1252917                                                */
/* Date : 10/10/23                                                     */
/* This program calculates a salary raise and exits when -1 is entered */
/*                                                                     */
/***********************************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    float salary, raise, totalRaise, totalOld, totalNew, newSalary, rate;
    newSalary = totalNew = totalOld = totalRaise = 0;

    //Input
    printf("                      Salary         Rate    Raise     New Salary\n");
    printf("-----------------------------------------------------------------\n");
    printf("Salary : ");
    scanf("%f", &salary);

    //Processing
    while (salary != -1) {
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
        printf("Salary : ");
        scanf("%f", &salary);
    }

    //Output
    printf("-----------------------------------------------------------------\n");
    printf("Total               %10.2f            %10.2f %10.2f\n",totalOld,totalRaise,totalNew);

    return 0;
}

/*
Test Run 1
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
Salary : -1
-----------------------------------------------------------------
Total                130000.00               7975.00  137975.00

Test Run 2
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : -1
-----------------------------------------------------------------
Total                     0.00                  0.00       0.00

Test Run 3
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
Salary : -1
-----------------------------------------------------------------
Total                150000.00               8400.00  158400.00

Test Run 4
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 12345
                      12345.00       7.00     864.15   13209.15
Salary : 54321
                      54321.00       4.00    2172.84   56493.84
Salary : 24135
                      24135.00       7.00    1689.45   25824.45
Salary : 43215
                      43215.00       4.00    1728.60   44943.60
Salary : -1
-----------------------------------------------------------------
Total                134016.00               6455.04  140471.03

Test Run 5
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 10000
                      10000.00       7.00     700.00   10700.00
Salary : 23532
                      23532.00       7.00    1647.24   25179.24
Salary : -1
-----------------------------------------------------------------
Total                 33532.00               2347.24   35879.24
*/
