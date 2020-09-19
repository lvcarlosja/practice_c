/*
    Name: Carlos Almeyda
    Program: 
        - Create a program that displays the byte size of basic data types supported in C
        - Display the byte size of:
            - int
            - char
            - long
            - short
            - long long
            - double
            - long double

    Date: 19 September 2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("Variables of type char occupy %zd byte\n", sizeof(char));
    printf("Variables of type int occupy %zd bytes\n", sizeof(int));
    printf("Variables of type long occupy %zd bytes\n", sizeof(long));
    printf("Variables of type long long occupy %zd bytes\n", sizeof(long long));
    printf("Variables of type short occupy %zd bytes\n", sizeof(short));
    printf("Variables of type double occupy %zd bytes\n", sizeof(double));
    printf("Variables of type long double occupy %zd bytes\n", sizeof(long double));
    printf("Variables of type float occupy %zd bytes\n", sizeof(float));

    return 0;
}