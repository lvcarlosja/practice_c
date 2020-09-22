/*
    Name: Carlos Almeyda
    Program: Guess the number!
    - This program will generate a random number, 0-20
    - Ask the for the user's input
    - The user should only input a number 0-20
    - The program will tell the user whether they are too high or too low
    - The user wins if they can guess the number within 5 tries

    Date: 21 September 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // This is required to implement a random number generator.


int main()

{
    int numberTries = 0;
    int numberEntered = 0;
    int numberofGuesses;
    int randomNumber = 0;
    time_t t;
    
    

    // Initialize the random number generator
    srand((unsigned) time(&t));
    randomNumber = rand() % 21;



    printf("This is a guessing game.\n\n");

    printf("I have chosen a whole number from 0-20. You must guess the number or fall into The Pit of Doom!.\n");

    // This is a for loop. Format: for(starting_condition; continuation_condition; action_per_iteration)
    for (numberofGuesses = 5; numberofGuesses > 0; --numberofGuesses) // The maximimum number of guesses is 5. Continue to loop as
                                                                      // long as the number of guesses is greater than 0. Decrement number of guesses in each loop.
    {
        printf("You have %d tr%s left.\n", numberofGuesses, numberofGuesses == 1 ? "y" : "ies"); // Fancy code for dictating accuracy whether to say try or tries.
        printf("Enter your guess: ");
        scanf("%d", &numberEntered); // Inputs the user's guess into the variable numberEntered

        if (numberEntered == randomNumber) // if the user guesses the number correctly
        {
            printf("You guessed it! You're amazing!\n");
            break;
        }
        else if(0 || numberEntered > 20) // If the number is NOT between 0 and 20
            printf("I said the number was between 0 and 20!!\n");
        else if(randomNumber > numberEntered) // If the generated number is greater than the user's number, then tell the user they are wrong and tell them the number is greater.
            printf("Nope! %d is SO wrong. My number is GREATER than that.\n", numberEntered);
        else if (randomNumber < numberEntered) // If the generated number is less than the user's number, then tell the user they are wrong and the number is less.
            printf("Nope! %d is SO wrong. My number is LESS than that.\n", numberEntered);  
    }
    printf("You had five tries. You lose! The number was %d.\n", randomNumber); // This is outside the loop. So, if the user exceeds 5 tries, then they lose. 


return 0;

}