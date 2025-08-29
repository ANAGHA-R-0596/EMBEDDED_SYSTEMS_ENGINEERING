/*
    * ANAGHA R
    * 29/08/2025
    * C program to swap two variables using XOR bitwise operator.
*/

#include<stdio.h>

int main()
{
    int a , b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("---------------------\n");
    printf("Numbers before swapping\n");
    printf(" a = %d \n b = %d\n", a, b);
    // Swapping using XOR bitwise operator
    a = a ^ b; // XOR a and b and store the result in a
    b = a ^ b; // XOR the new value of a with b and store the result in b
    a = a ^ b; // XOR the new value of a with the new value of b and store the result in a
    printf("---------------------\n");
    printf("Numbers after swapping\n");
    printf(" a = %d \n b = %d\n", a, b);
    printf("---------------------\n");
    return 0;
}