/*
    Name: Carlos Almeyda
    Date: 19 September 2020
    Program: Control flows
    - Control flow statements break up the flow of exectution by employing decision making
    looping, and branching, enabling the program to conditionally execute particular blocks of code

    Decision-making: if-then, if-then-else, switch, goto.

    Looping: for, while, do-while.

    branching: break, continue, return.

    Loop statement allows us to execute a statement or group of statements multiple times. 

    If:
    - if (expression)
        program statement

    Single program statement:
    if (it is not raining)
        I will go swimming
    
    Multiple program statements:
    if (it is not raining)
        {
            I will go swimming;
            I will wear shorts;
            I will not bring my umbrella;

        }
    
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int score = 80;
    int big = 90;
    enum Weekday{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Whatever.\n");
            break;
    }
    printf("%d = Today is Monday\n", today);

    /*if (score > big)// This does not require curly braces because there is one program statement
        printf("Jackpot!\n");
    
    if (score > big)// This requires curly braces because there are multiple program statements
    {//signifies the beginning of the block
        ++score;
        printf("%d\n", score);
        printf("You are the winner!\n");
        printf("The above statement is printed because score is bigger and then score is incremented.\n");
        return 0;
    }//signifies the ending of the block
    */
    if (score < big)
        printf("You lose! Do Better!\n");

    else
    {
        printf("You win bro!\n");
    }

    // This is an example of a ternary operator.
    int x = 0;
    int y = 8;
    // x = y. If y is greater than 7, then x = 25. 
    // If y is NOT greater than 7, then x = 50.
    x = y > 7 ? 25 : 50;
    printf("%d\n", x);

    /* switch statements
        switch (expression) the expression is compared against the values.
        {
            case value1:
                program statement

                break;
            case value2:
                program statement
                program statement

                break;
            default:
                program statement

                break;
        }
    */

   


    
return 0;
}
