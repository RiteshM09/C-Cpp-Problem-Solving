// Write a function to check whether a given number is Prime or not. (TSRS). 
// (Return 1 if prime, otherwise return 0)

#include<stdio.h>
int Prime(int);
int main()
{
    int n, result;
    printf("Enter a nuber = ");
    scanf("%d",&n);
    result=Prime(n);
    
    if(result==1)
        printf("\n Prime ");
    else 
        printf("Not a prime");

    return 0;
    
}
int Prime(int x)
{   
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
            break;

    if(i==x)
        return 1;
    else 
        return 0;
}