/*
    Name: Carlos Almeyda
    Program: Find all of the prime numbers from 3-100.
    - There will be no input from a user
    - The output will be each prime number separated by a space on a single line. 
    - Create an array that will store each prime number as it is generated
    - Hard code the first two prime numbers. (2 and 3) in the primes array
    - Utilize loops to only find prime numbers up to 100 and a loop to print out the primes array.

    Criteria:
    - A number is considered PRIME if it is NOT evenly divisible by any other previous prime numbers. 
    - ignore even numbers because even numbers cannot prime. 
    - p / primes [i] >= primes[i]
    - Create a test to ensure that the value of p does not exceed the square root of primes[i]

    Date: 06 October 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int p;
    int i;
    int primes[50] = {0}; // By adding zero here, we are intializing the array to zero.
    int primeIndex = 2; // This hard codes the first two prime numbers. 
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p/primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;
        
        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (i = 0; i < primeIndex; ++i)
        printf("%i ", primes[i]);
        
    printf("\n");

    return 0;
}




