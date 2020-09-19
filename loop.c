/*
    Name: Carlos Almeyda
    Project: Create a program that defines an enum type and uses that type
    to display the values of some variables
    Date: 19 September 2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{   // Format: for(starting_condition; continuation_condition; action_per_iteration)
    //            loop_statement;

    for(int count = 1; count <= 10; ++count) // There three different expressions here separated by semi-colons.
        printf(" %d\n", count);
        printf("I can count to 10 all by myself!\n");

    int count_ = 1;

    // Here is another way to loop. The while loop just uses a different syntax.
    while(count_ <=5)
    {
        printf("%i\n", count_);
        ++count_;
    }



return 0;
}