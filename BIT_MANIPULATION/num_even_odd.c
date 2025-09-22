/*
    ANAGHA R
    Check number is even or odd using bit manipulation
    22/09/2025
*/

#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num & 1)
        printf("%d is odd\n", num);
    else
        printf("%d is even\n", num);
    printf("The binary representation of the new number is: ");
    for(int j = 31; j >= 0; j--)
    {
        printf("%d", (num >> j) & 1);
    }
    return 0;
}