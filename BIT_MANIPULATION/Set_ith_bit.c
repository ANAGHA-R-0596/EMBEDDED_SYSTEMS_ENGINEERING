/*
    ANAGHA R
    Set the ith bit of a number
    22/09/2025
*/

#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of the bit to be set(LSB = 1) : ");
    scanf("%d", &i);
    num = num | (1 << (i-1));
    printf("The new number after setting the bit at position %d is %d\n", i, num);
    printf("The binary representation of the new number is: ");
    for(int j = 31; j >= 0; j--)
    {
        printf("%d", (num >> j) & 1);
    }
    return 0;
}