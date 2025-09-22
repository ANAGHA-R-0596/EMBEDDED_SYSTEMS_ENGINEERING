/*
 ANAGHA R
 C program to perform bitwise operations
 Date: 22/09/2025

*/
#include <stdio.h>
unsigned char modified_value(unsigned char );
int main()
{
    unsigned char num,result;
    printf("Enter an 8-bit value : ");   
    scanf("%hhu", &num);
    result = modified_value(num);
    printf("Modified value is: %hhu\n", result);
    return 0;
}
unsigned char modified_value(unsigned char value)
{
    value = value |  (1 << 2);   // Set bit 3rd bit
    value = value & ~(1 << 5);   // Clear bit 6th bit
    value = value ^  (1 << 0);   // Toggle bit 1st bit
    return value;
}