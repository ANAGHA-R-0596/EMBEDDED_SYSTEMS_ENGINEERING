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