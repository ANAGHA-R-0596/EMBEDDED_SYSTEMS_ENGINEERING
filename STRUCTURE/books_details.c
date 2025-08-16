/*
    ANAGHA R
    15/08/2025
    This program stores book details in a structure and displays the details of the most expensive book.
*/
#include <stdio.h>

// Define a structure to hold book details
struct book {
    char title[50]; 
    char author[30]; 
    float price; 
};

int main()
{
    struct book b[3]; // Declare an array of book structures
    int index = 0; // Index for expensive book

    // Input book details
    for(int i =0; i<3; i++)
    {
        printf("Enter details of book %d:\n", i + 1);
        printf("Enter book title  : ");
        scanf(" %[^\n]", b[i].title); 
        printf("Enter book author : "); 
        scanf(" %[^\n]", b[i].author); 
        printf("Enter book price  : ");
        scanf("%f", &b[i].price); 
        printf("========================================\n");
    }
    printf("\n");

    // Find the most expensive book
    for (int i=1 ; i<3 ; i++)
    {
        if (b[i].price > b[index].price)
        {
            index = i; // Update index if ith book is more expensive
        }
    }

    // Display the details of the most expensive book
    printf("      MOST EXPENSIVE BOOK DETAILS\n");
    printf("========================================\n");
    printf("TITLE OF THE BOOK  : %s\n" , b[index].title);
    printf("AUTHOR OF THE BOOK : %s\n", b[index].author);
    printf("PRICE OF THE BOOK  : %.2f\n", b[index].price);
    printf("========================================\n");
    
    return 0;
}
