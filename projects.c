/*
    Author: Carlos Almeyda
    Purpose: Learning to Code in C
    Date: 10 September 2020
*/

/*
    #include statement is a pre-processor directive. This is run before compiling the program.
    This is in every C program.
    Instructs the compiler to do something before compiling the code.

    <stdio.h> is a header file. This defines information about some of the functions that are provided by the
    file.
        -Specifically, this header file provides functionality for displaying output. 
    
    Header files can be included in two ways
        - You can use angle brackets <>
            Tells the preprocessor to look for the file in one or more standard system directories
        - You can also use double quotes ""
            tells the proprocessor to first look in the current directory
    
*/
#include <stdio.h>

/* 
    the parantheses indicate a function
*/

int main(int argc, char *argv[]) 
            /* this defines a function. This is NOT a statement. Therefore, this does not require a semi-colon
              the KEYWORD => int is used to declare the basic integer variable.
              C requires that all program variables be declared before they are used in a program. 
            */



/* 
    the "main" function is en entry point for the program
*/

/* the main function is invoked when the program is executed */

{ 
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    char str[100];
    char myCharacter = 'P';
    int x = 112;
    int y = 5, z = 10, a = 110;
    float carlos = 69.69;
    double bigCarlos = 999.999999999999999999999999;
    _Bool boolVariable = 1;

    enum month {January, February, March, April, May, June, July, August, September = 9, October, November, December};

    enum gender {male, female, nonbinary, transgender};

    int sum = 69;
/* 
    curly brackets specify the start of the function 
*/

    /* 
        Semi-colons are required at the end of EVERY statement

        print() is a standard library function
    */
    printf("\nYo, what's up?! How's your day going so far, Carlos? :)\n\n");
    // return 0; /* when you return 0, this means there was no error in the program */
    
    /*
        The C libary contains several input functions.
        scanf() is a the most general input function. 
        Uses pointers to variables.

        Three rules about scanf:
        - returns the number of items that it successfully reads
        - If you use scanf to read a value for one of the basic varible types (%s, %d, %c, %f), precede the variable name with an &
        - If you use scanf to read a string into a character array, don't use an &.
    */
   scanf("%s", str);
   printf("\nYou entered: %s\n\n", str);

   printf("%i\n\n", carlos);
   enum month thisMonth;
   enum month nextMonth;
   thisMonth = September;
   nextMonth = October;
   printf("%i\n\n", thisMonth);
   printf("%i\n\n", nextMonth);

   enum gender myGender;
   myGender = male;
   printf("%i\n\n", myGender);
   printf("%c\n\n", myCharacter);

   printf("I love to %d with chicks who have huge tits!\n\n", sum);


   printf("Number of arguments: %d\n", numberOfArguments);
   printf("Argument 1 is the program name: %s\n", argument1);
   printf("Argument 2 is the command line argument: %s\n", argument2);

   return 0;


}