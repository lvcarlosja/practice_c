/*
    Name: Carlos Almeyda
    Program: Convert minutes to years and days.
        The program should ask the user to enter a number via the terminal
        The program should display as output the minutes and then its equivalent in years and days
        Variables should all be type double

    Date: 16 September 2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int minutesEntered = 0;
    double days = 0.0;
    double weeks = 0.0;
    double years = 0.0;
    double result = 0.0;
    double minutesYears = 0;
    double minutesDays = 0;
    double minutesWeeks = 0;
    

    printf("Please, enter number of minutes: \n");

    // obtain input from user
    scanf("%d", &minutesEntered);
    // Print the user's input.
    printf("You entered %d " "minutes.\n", minutesEntered);

    // The calculations for minutes in each time period.
    minutesYears = (60 * 24 * 365);
    minutesDays = (60 * 24);
    minutesWeeks = (60 * 24 * 7);

    // Here, we take the input from the user and divide by the minutes in each time period.
    years = (minutesEntered / minutesYears);
    days = (minutesEntered / minutesDays);
    weeks = (minutesEntered / minutesWeeks);


    printf("%d minutes is equivalent to %.2f years\n", minutesEntered, years);
    printf("%d minutes is also equivalent to %.2f days.\n", minutesEntered, days);
    printf("%d minutes is also equivalent to %.2f weeks.\n", minutesEntered, weeks);


    return 0;
}

