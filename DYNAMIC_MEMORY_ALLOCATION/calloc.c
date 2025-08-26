/*
    ANAGHA R
    23/08/2025
    DYNAMIC MEMORY ALLOCATION USING CALLOC 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables
    int n;
    int *ptr;
    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Dynamically allocate memory using calloc()
    ptr = (int *)calloc(n ,sizeof(int));
    // Check if the memory has been successfully allocated by calloc or not
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }
    // Ask user to enter the elements
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d", ptr+i);
    }
    // Print the elements
    printf("The elements are: \n");
    for(int i = 0; i < n; i++)
    {
        printf("Element %d  at %p => %d \n",i+1, ptr+i, *(ptr+i));
    }
    free(ptr); // Free the allocated memory
    return 0;
}