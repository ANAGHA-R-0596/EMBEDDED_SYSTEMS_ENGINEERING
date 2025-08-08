/*
AUTHOR : ANAGHA R
DATE : 08/08/2025
FUNCTION TO PERFORM ADDITION OPERATION
*/
#include<stdio.h>
int add(int,int);
int main()
{
    int result;
    int a ,b;
    printf("ENTER THE FIRST NUMBER=>");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER=>");
    scanf("%d",&b);
    result = add(a,b);
    printf("THE RESULT AFTER ADDITION => %d",result);
}

int add(int c,int d)
{
    int sum = c + d;
    return sum;
}
