#include<stdio.h>
int add(int,int);
int main()
{
    int result;
    int a = 100,b = 65;
    result = add(a,b);
    printf("THE RESULT AFTER ADDITION => %d",result);
}

int add(int c,int d)
{
    int sum = c + d;
    return sum;
}
