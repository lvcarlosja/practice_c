/*
    Name: Carlos Almeyda
    Program: Calculate your weekly pay
    - Ask the user to enter the number of hours worked in a week
    - Program should display the gross pay, the taxes, and the net pay. 

    Assumptions:
    - Base pay: $12.00/hr
    - Overtime (over 40 hrs): time and a half
    - Tax Rate: 
        * 15% of the first $300
        * 20% of the next $150
        * 25% of the rest   
    
    Need to use if/else statements

    Date: 19 September 2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hoursWeek = 0;
    double payRate = 0.0;
    double grossPay = 0.0;
    double tax15 = 0.0;
    double tax20 = 0.0;
    double tax25 = 0.0;  
    double overtimeRate = 0.0;
    double overtimePay = 0.0; 
    double netPay = 0.0; 


    printf("Please, enter the number of hours you worked this week: \n");
    scanf("%d", &hoursWeek);
    
        
    if (hoursWeek > 40)
    {
        grossPay = 40 * 12.00;
        overtimeRate = (hoursWeek - 40) * 18.00;        
        overtimePay = grossPay + overtimeRate;
        printf("You worked more than 40 hours! You're an animal!\nYou gross pay with overtime is $%.2f\n", overtimePay);
        grossPay = overtimePay;
    }
    else
    {
        payRate = (hoursWeek * 12.00);
        printf("Your gross pay is: $%.2f\n", payRate);
        grossPay = payRate;       
    }
    
    if (grossPay <= 300) // This will calculate the tax on the first $300.
        {
            payRate = grossPay * .15;
            netPay = grossPay - payRate;
            printf("Your net pay is $%.2f\nYou were taxed at 15 percent.\n", netPay);        
        }
    if (grossPay > 300 && grossPay <= 450) // This will calculate the tax on the $150 after the first $300.
        {
            tax15 = 300 * .15;
            payRate = (grossPay - 300) * .20 + tax15;
            netPay = grossPay - payRate;
            printf("Your net pay is $%.2f\nYou were taxed at 20 percent.\n", netPay);
        }
    if (grossPay > 300 && grossPay > 450) // This calculates taxes after $450
        {
            tax15 = 300 * .15;
            tax20 = 150 * .20;
            payRate = (grossPay - 450) * .25 + (tax20 + tax15);
            netPay = grossPay - payRate;
            printf("Your net pay is $%.2f\nYou were taxed at 25 percent\n", netPay);
        }

    return 0;
}