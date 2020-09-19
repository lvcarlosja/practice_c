/*
    Name: Carlos Almeyda
    Project: Create a program that defines an enum type and uses that type
    to display the values of some variables
    Date: 15 September 2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT}; //When you change the value of one of these, 
                                                                         //the subsequent items are incremented.

    enum company xerox = XEROX; // this creates a variable "xerox" and assigns XEROX to that variable.
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("Xerox = %d\n", xerox); // %d is used here because enums are actually integers
    printf("Google = %d\n", google);
    printf("Ebay = %d\n", ebay);
    return 0;
}