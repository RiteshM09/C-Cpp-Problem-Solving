// Recursive fucntion to calculate factorial of a number.
/*
input: 5
output:120

input: 3
output 6

1. function 
2. recursive case
3. base case (end)
*/
#include<stdio.h>
long long int fact(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Factorial :of %d is %lld ",num,fact(num));

    return 0;
}
long long int fact(int n)
{
    if(n==0)
        return 1;

    return n*fact(n-1);
}