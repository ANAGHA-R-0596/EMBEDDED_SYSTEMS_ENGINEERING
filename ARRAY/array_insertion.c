/*
ANAGHA R
11/08/2025
TO INSERT EVEN NUMBERS IN AN ARRAY
*/
#include<stdio.h>

int main()
{
    int mark[100]; // Array to hold even numbers
    int j=0,n;
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &n);
    printf("========================================\n");
    printf("      EVEN NUMBER ARRAY GENERATOR\n");
    printf("========================================\n");
    printf("Index\tValue\n");
    printf("-----\t-----\n");
    for(int i =0 ;i<=n;i++)
    {
        mark[i]=j;
        printf("%d\t%d \n",i,mark[i]);
        j=j+2;
    }
}