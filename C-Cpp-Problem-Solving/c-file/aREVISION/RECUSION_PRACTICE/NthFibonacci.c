// find Nth term of fibonacci series using recursion.
/*
nth term   = 0 1 2 3 4 5 6 7  8  9  10 11 12..
fib series = 0 1 1 2 3 5 8 13 21 34 55 89 144..  

input: 0
output:0

input: 2
output:1

input: 6
output:8

input: 10
output:55

*/
#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("Enter Nth term: ");
    scanf("%d",&n);

    printf("fibonacci no. : %d ",fib(n));
}
int fib(int n){
    
    if(n<2)// when n is 0 or 1 
        return n;

    return fib(n-1)+fib(n-2);
}