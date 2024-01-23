/***************************************************************************/
/*Name :  Melih Erduran                                                    */
/*Student ID :  1252917                                                    */
/*Homework 3 Program Set 1                                                 */
/*Date :  11/9/2023                                                        */
/*This program calculates salary raises for employees.                     */
/*                                                                         */
/***************************************************************************/

#include <stdio.h>

//Function prototypes
void load(char name[], double *salary);
double calcRate(double salary);
double calcRaise(double salary, double rate);
double calcNewSalary(double salary, double raise);
void calcTotalSalaries(double salary, double raise, double newSalary, double *totalSalary, double *totalRaise, double *totalNewSalary);
void salaryOutput(char name[], double salary, double rate, double raise, double newSalary);
void totalOutput(double totalSalary, double totalRaise, double totalNewSalary);

int main()
{
    // Declaration
    int numEmployees;
    char name[20];
    double salary, rate, raise, newSalary;
    double totalSalary = 0, totalRaise = 0, totalNewSalary = 0;

    //Data/Input
    printf("How many employees: ");
    scanf("%d", &numEmployees);
    printf("\n");

    //Output
    for (int i = 0; i < numEmployees; ++i)
    {
        load(name, &salary);
        rate = calcRate(salary);
        raise = calcRaise(salary, rate);
        newSalary = calcNewSalary(salary, raise);
        calcTotalSalaries(salary, raise, newSalary, &totalSalary, &totalRaise, &totalNewSalary);
        salaryOutput(name, salary, rate, raise, newSalary);
    }
    totalOutput(totalSalary, totalRaise, totalNewSalary);

    return 0;
}

//load() let's user input the employee's full name and current salary
//and return the name and salary to main()
void load(char name[], double *salary)
{
    //Data & Output
    printf("Enter the Employee's name: ");
    getchar();
    gets(name);
    printf("Enter salary : ");
    scanf("%lf", salary);
}

//calcRate() finds the rate for the salary and returns rate to main()
double calcRate(double salary)
{
    //Calculation & Output
    if (salary > 40000){
        return 0.04;
    } else if (salary >= 30000){
        return 0.055;
    } else {
        return 0.07;
    }
}

//calcRaise() calculates the raise and returns raise
double calcRaise(double salary, double rate)
{
    //Calculation & Output
    return salary * rate;
}

//calcNewSalary() calculates the new salary and returns the new salary
double calcNewSalary(double salary, double raise)
{
    //Calculation & Output
    return salary + raise;
}

//calcTotalSalaries() calculates the total for the salary, raise, and new salary
//and pass the total salary, total raise, total new salary back to the calling function
void calcTotalSalaries(double salary, double raise, double newSalary, double *totalSalary, double *totalRaise, double *totalNewSalary)
{
    //Calculations & Output
    *totalSalary += salary;
    *totalRaise += raise;
    *totalNewSalary += newSalary;
}

//salaryOutput() prints the name, salary, rate, raise, and new salary
void salaryOutput(char name[], double salary, double rate, double raise, double newSalary)
{
    //Output
    printf("\nEmployee's Name   : %16s\n", name);
    printf("Salary            : %16.2lf\n", salary);
    printf("Rate              : %15.1lf%%\n", rate * 100);
    printf("Raise             : %16.2lf\n", raise);
    printf("New salary        : %16.2lf\n", newSalary);
    printf("\n");
    printf("\n");
}

//totalOutput() prints the total salary, total raise, and total new salary
void totalOutput(double totalSalary, double totalRaise, double totalNewSalary)
{
    //Output
    printf("\nTotal salary      : %16.2lf\n", totalSalary);
    printf("Total Raise       : %16.2lf\n", totalRaise);
    printf("Total New Salary  : %16.2lf\n", totalNewSalary);
}

/*
Test Run 1
How many employees: 6

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   :     Daisy Yellow
Salary            :         25000.00
Rate              :             7.0%
Raise             :          1750.00
New salary        :         26750.00


Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   :         Rose Red
Salary            :         30000.00
Rate              :             5.5%
Raise             :          1650.00
New salary        :         31650.00


Enter the Employee's name: Periwinkle Pink
Enter salary : 35000.00

Employee's Name   :  Periwinkle Pink
Salary            :         35000.00
Rate              :             5.5%
Raise             :          1925.00
New salary        :         36925.00


Enter the Employee's name: Marigold Orange
Enter salary : 40000.00

Employee's Name   :  Marigold Orange
Salary            :         40000.00
Rate              :             5.5%
Raise             :          2200.00
New salary        :         42200.00


Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   :        Iris Blue
Salary            :         40001.00
Rate              :             4.0%
Raise             :          1600.04
New salary        :         41601.04


Enter the Employee's name: Lilacs Purple
Enter salary : 45000.00

Employee's Name   :    Lilacs Purple
Salary            :         45000.00
Rate              :             4.0%
Raise             :          1800.00
New salary        :         46800.00



Total salary      :        215001.00
Total Raise       :         10925.04
Total New Salary  :        225926.04
*/
