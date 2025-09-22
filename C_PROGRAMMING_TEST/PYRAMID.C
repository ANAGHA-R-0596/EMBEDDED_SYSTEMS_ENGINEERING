/*
    ANAGHA R
    C program to print a pyramid pattern of stars
    Date: 22/09/2025
*/
#include <stdio.h>

int main()
{
    int i, j, n;
    // Enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // For printing the pyramid
    for(i = 1; i <= n; i++)
    {
        // Printing spaces
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        // Printing stars
        for(j = 1; j <= ((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


