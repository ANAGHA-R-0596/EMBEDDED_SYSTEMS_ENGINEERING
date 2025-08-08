/*
AUTHOR : ANAGHA R
DATE : 08/08/2025
FUNCTION TO PERFORM MULTIPLICATION OPERATION
*/
#include<stdio.h>
int mul(int,int);
int main()
{
    int result;
    int a , b;
    printf("ENTER THE FIRST NUMBER=>");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER=>");
    scanf("%d",&b);
    result = mul(a,b);
    printf("THE RESULT AFTER MULTIPLICATION => %d",result);
}

int mul(int c,int d)
{
    int product = c * d;
    return product;
}