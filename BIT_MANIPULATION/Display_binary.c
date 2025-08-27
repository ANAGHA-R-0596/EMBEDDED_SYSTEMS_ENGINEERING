/*
    ANAGHA R
    27/08/2025
    This program displays the binary representation of an integer using bitwise operations.
*/

#include<stdio.h>
void display_binary(int );
void set_bit(int , int);
void clear_bit(int , int);
int main()
{
    int num,pos,place;
    printf("Enter an integer: ");
    scanf("%d", &num); 
    printf("Enter the bit position to set a bit (0-31): ");
    scanf("%d", &pos);  
    printf("Enter the bit position to clear a bit (0-31): ");
    scanf("%d", &place); 
    display_binary(num);   // Call function to display binary representation
    set_bit(num, pos);     // Call function to set the bit at the specified position
    clear_bit(num, place); // Call function to clear the bit at the specified position
    return 0;
}
// Function to display binary representation of an integer
void display_binary(int n)
{
    int i;
    printf("Binary representation of %d is: ", n);
    for(i = 31; i >= 0; i--) // Loop through each bit position from 31 to 0
    {
        int bit = (n >> i) & 1; // Right shift n by i and AND with 1 to get the bit at position i
        printf("%d ", bit); 
    }
    printf("\n");
}
// Function to set the bit at position 
void set_bit(int n, int pos)
{
    int new_num = n | (1 << pos); // Set the bit at position pos using bitwise OR
    printf("Number after setting bit at position %d: %d\n", pos, new_num);
    display_binary(new_num); 
}
// Function to clear the bit at position
void clear_bit(int n, int pos)
{
    int new_num = n & ~(1 << pos); // Clear the bit at position pos using bitwise AND with NOT
    printf("Number after clearing bit at position %d: %d\n", pos, new_num);
    display_binary(new_num); 
}

// Function to display binary representation of an integer(alternate way)
/*void display_binary(int n)
{
    int i;
    printf("Binary representation of %d is: ", n);
    for(i = 31; i >= 0; i--) // Loop through each bit position from 31 to 0
    {
        if((n & (1 << i)) != 0)// Check if the ith bit is set
            printf("1 "); // Print 1 if the bit is set
        else
            printf("0 "); // Print 0 if the bit is not set
    }
    printf("\n");
}*/