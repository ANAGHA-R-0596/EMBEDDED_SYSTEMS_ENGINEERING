/*
    ANAGHA R
    18/08/2025
    This program demonstrates the use of pointers to store and print addresses and value of an array of integers.
*/
#include<stdio.h>

int main()
{
    int arr[10]; // Declare an array of integers
    int *ptr_arr[10]; // Declare pointers to store the address of each element 

    // Initialize pointers to point to each element of the array
    for(int i = 0; i < 10; i++)
    {
        ptr_arr[i] = &arr[i]; 
    } 
    printf("ENTER THE NUMBERS: ");
    // Input values into the array
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]); 
    }
    
    printf("-----------------------------------\n");
    for(int i = 0; i < 10; i++)     
    {
        printf("Address of arr[%d]      : %p\n", i, &arr[i]);         // Print address of each element in the array
        printf("Value at arr[%d]        : %d\n", i, *ptr_arr[i]);     // Print value at address pointed by pointer for each element
        printf("Address of ptr_arr[%d]  : %p\n", i, &ptr_arr[i]);     // Print address of pointer
        printf("Value inside ptr_arr[%d]: %p\n", i, ptr_arr[i]);      // Print address stored in pointer for each element
        printf("-----------------------------------\n");
        
    }
}