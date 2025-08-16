/*
    ANAGHA R
    12/08/2025
    This program stores employee information in a structure and displays it.
*/
#include<stdio.h>
// Define a structure to hold employee information
struct Employee {
    char name[50]; // Employee name
    int id; // Employee ID
    float salary; // Employee salary
};

int main() {
    struct Employee emp [5] ; // Declare a variable of Employee structure
    // Input employee details
    for(int i = 0; i < 5; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Enter employee Name: "); 
        scanf("%[^\n]", emp[i].name); // Read employee name
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id); // Read employee ID
        printf("Enter employee Salary: ");
        scanf("%f", &emp[i].salary); // Read employee salary
    }
    // Display the employee details
    for(int i = 0; i < 5; i++)
    {
        printf("Employee %d Details:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("========================================\n");
    }
    return 0;
}
