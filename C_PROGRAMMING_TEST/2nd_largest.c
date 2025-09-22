/*
 ANAGHA R
 C program to find the 2nd largest element in an array using function.
 Date: 22/09/2025
*/

#include <stdio.h>
int second_largest(int [], int );
int main()
{
    int size,sec_largest;
    // Enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    // Enter the elements
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    sec_largest = second_largest(arr, size);
    printf("The 2nd largest element is: %d\n", sec_largest);
    return 0;
}

int second_largest(int arr[], int size)
{
    int largest,second_largest;   
    if(arr[1]>arr[0])            //checking if 1st index element is greater than 0th index element.
    {
        largest=arr[1];          
        second_largest=arr[0];   
    }
    else
    {
         largest=arr[0];         
         second_largest=arr[1];  
    }
    for(int i=2;i<size;i++)      
    {
        //Compare each element with largest
        if(arr[i]>largest)        
        {
            second_largest=largest;  
            largest=arr[i];         
        }
        else if(arr[i]>second_largest && arr[i]<largest)
        {
            second_largest=arr[i];   
        }
    }
    return second_largest;
}