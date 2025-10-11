/*
 * Program: Swap Two Numbers Using Pointers
 * Description=>This program demonstrates swapping the values of two integer variables using pointers in C. 
 * Author: Anagha R
 */

#include <stdio.h>

void swap(int *num1, int *num2);  // Function prototype: swap two integers using pointers

int main()
{
    int num1, num2;
    
    printf("Enter two numbers : ");  // Ask user to enter two numbers
    scanf("%d %d", &num1, &num2);

    printf("Before swapping\n num1 = %d and num2 = %d\n", num1, num2);  // Display values before swapping

    swap(&num1, &num2);   // Call swap function with addresses of num1 and num2

    printf("After swapping\n num1 = %d and num2 = %d\n", num1, num2);  // Display values after swapping

    return 0;
}

//Function definition: The swap function swaps the values of variables,and the changes are reflected in the main function.
void swap(int *num1, int *num2)
{
    int temp;          // Temporary variable to hold value during swap
    temp = *num1;      // Store value of first variable
    *num1 = *num2;     // Assign value of second variable to first
    *num2 = temp;      // Assign stored value to second variable
}
