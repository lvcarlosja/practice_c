/*
    Name: Carlos Almeyda
    Program: Display the perimeter and area of a rectangle
    Date: 16 September 2020

    Instructions: The program should create FOUR variables of type double.
        - Create one variable to store the width of the rectangle
        - Create one variable to store the length of the rectangle
        - Create one variable to store perimeter of the rectangle
        - Create one variable to store the area of the rectangle
    
    Formulas:
        - Perimeter: length + width * 2
        - Area: length * width

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area = 0.0;
    double perimeter = 0.0;
    double length = 10.57611;
    double width = 121.676322;

    area = length * width;
    perimeter = 2.0 * (length + width);

    printf("Below are the measurements of a rectangle.\n");
    printf("Length = %.2f\n", length); //%f is a format specifier for doubles
    printf("Width = %.2f\n", width); //.2 tells the compiler to only display 2 decimal places
    printf("Provide the AREA and the PERIMETER.\n");
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
}

