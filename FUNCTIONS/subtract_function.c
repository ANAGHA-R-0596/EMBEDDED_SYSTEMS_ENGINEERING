/*
AUTHOR : ANAGHA R
DATE : 08/08/2025
FUNCTION TO PERFORM SUBTRACTION OPERATION
*/
#include<stdio.h>
int sub(int,int);
int main()
{
    int result;
    int a , b;
    printf("ENTER THE FIRST NUMBER=>");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER=>");
    scanf("%d",&b);
    result = sub(a,b);
    printf("THE RESULT AFTER SUBTRACTION => %d",result);
}

int sub(int c,int d)
{
    int diff = c - d;
    return diff;
}
