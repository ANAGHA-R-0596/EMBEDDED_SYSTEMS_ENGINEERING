/*
    ANAGHA R
    22/08/2025
    This program demonstrates the use of void pointers to store and print addresses and values of an array of integers.
*/
#include<stdio.h>

int main()
{
    float arr[10] = {1,2,3,4,5,6,7,8,9,10}; // Declare an array of floats
    void *ptr_arr = arr; // Declare void pointers to store addresses of each element
    for(int i = 0; i < 10; i++)
    {
        printf("Value at arr[%d] : %.2f\n", i, *((float *)ptr_arr+i)); // Print value at address pointed by void pointer for each element
    }
}
