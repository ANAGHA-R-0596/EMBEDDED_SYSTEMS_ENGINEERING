/*
    ANAGHA R
    C program to find factorial of a number using recursion and iterative method.
    Date: 14/10/2025
*/

#include <stdio.h>

unsigned long long int factorial_recursive(int n);
unsigned long long int factorial_iterative(int n);

int main()
{
    int num;
    unsigned long long int result_recursive, result_iterative;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result_recursive = factorial_recursive(num);
        result_iterative = factorial_iterative(num);
        printf("Factorial of %d (using recursion) is: %llu\n", num, result_recursive);
        printf("Factorial of %d (using iteration) is: %llu\n", num, result_iterative);
    }
    return 0;
}

// Recursive method to calculate factorial
unsigned long long int factorial_recursive(int n)
{
    if (n == 0 || n == 1)

        return 1;

    else
        {
            return n * factorial_recursive(n - 1);  
        }
}
// Iterative method to calculate factorial
unsigned long long int factorial_iterative(int n)
{
    unsigned long long int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

