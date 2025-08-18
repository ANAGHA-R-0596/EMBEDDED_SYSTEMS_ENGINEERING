/*
    ANAGHA R
    18/08/2025
    This program demonstrates the use of pointers to print the address and value inside the address pointed by pointer.
*/
#include<stdio.h>

int main()
{
    int a , b ,c ; // Declare  integer variable
    a = 10; 
    b = 20;    
    c = 30; 
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;

    printf("Address of a         : %p\n", &a);      // Print address of variable a
    printf("Address of ptr_a     : %p\n", &ptr_a);  // Print address of pointer ptr_a
    printf("Value inside ptr_a   : %p\n", ptr_a);   // Print address stored in pointer ptr_a
    printf("Value at address of a: %d\n", *ptr_a);  // Print value at address of a
    printf("Address of b         : %p\n", &b);      // Print address of variable b
    printf("Address of ptr_b     : %p\n", &ptr_b);  // Print address of pointer ptr_b
    printf("Value inside ptr_b   : %p\n", ptr_b);   // Print address stored in pointer ptr_b
    printf("Value at address of b: %d\n", *ptr_b);  // Print value at address of b
    printf("Address of c         : %p\n", &c);      // Print address of variable c
    printf("Address of ptr_c     : %p\n", &ptr_c);  // Print address of pointer ptr_c
    printf("Value inside ptr_c   : %p\n", ptr_c);   // Print address stored in pointer ptr_c
    printf("Value at address of c: %d\n", *ptr_c);  // Print value at address of c

    return 0;

}
