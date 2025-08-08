/*
AUTHOR : ANAGHA R
DATE : 08/08/2025
FUNCTION TO PERFORM DIVISION OPERATION
*/
#include<stdio.h>
float div(int,int);
int main()
{
    float result;
    int a , b;
    printf("ENTER THE FIRST NUMBER=>");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER=>");
    scanf("%d",&b);
    result = div(a,b);
    printf("THE RESULT AFTER DIVISION => %f",result);
}

float div(int c,int d)
{
    float quotient = (float)c / d;
    return quotient;
}