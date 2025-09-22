/*
    ANAGHA R
    Check if the ith bit is set or not
    22/09/2025
*/

#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of the bit to be checked(LSB = 0) : ");
    scanf("%d", &i);
    if(num & (1 << i))
    {
        printf("The bit at position %d is set\n", i);
    }
    else
    {
        printf("The bit at position %d is not set\n", i);
    }


}