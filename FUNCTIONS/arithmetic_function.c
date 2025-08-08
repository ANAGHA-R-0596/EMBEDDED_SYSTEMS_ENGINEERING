/*
AUTHOR : ANAGHA R
DATE   : 08/08/2025
FUNCTIONS TO PERFORM BASIC ARITHMETIC OPERATIONS
*/
#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int main()
{
    int ret_sum,ret_diff,ret_prod;
    float ret_quotient;
    int a ,b;
    int choice;
    printf("ENTER THE FIRST NUMBER=>");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER=>");
    scanf("%d",&b);
    printf("ENTER THE CHOICE FOR PARTICULAR OPERATION\n");
    printf(" 1=>ADDITION\n 2=>SUBTRACTION\n 3=>MULTIPLICATION\n 4=>DIVISION\n");
    scanf(" %d",&choice);
    if(choice == 1)
    {
        ret_sum = add(a, b);
        printf("THE RESULT AFTER ADDITION => %d\n", ret_sum);
    }
    else if(choice == 2)
    {
        ret_diff = sub(a, b);
        printf("THE RESULT AFTER SUBTRACTION => %d\n", ret_diff);
    }
    else if(choice == 3)
    {
        ret_prod = mul(a, b);
        printf("THE RESULT AFTER MULTIPLICATION => %d\n", ret_prod);
    }
    else if(choice == 4)
    {
        ret_quotient = div(a, b);
        printf("THE RESULT AFTER DIVISION => %f\n", ret_quotient);
    }
   
    return 0;
}

//Function for addition
int add(int c,int d)
{
    int sum = c + d;
    return sum;
}
//Function for subtraction
int sub(int c,int d)
{
    int diff = c - d;
    return diff;
}
//Function for multiplication
int mul(int c,int d)
{
    int product = c * d;
    return product;
}
//Function for division
float div(int c,int d)
{
    float quotient = (float)c / d;
    return quotient;
}
