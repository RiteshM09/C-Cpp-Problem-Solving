// Write a recursive function to calculate sum of first n odd natural numbers
// Function         -       SumOfOddN(n) 1+3+5+..2n-3.2n-1 
// R.C              -     (2*n-1)+SumOfOddN(n-1) (1+3+4....2n-3).
// B.C              -   if 
//ex: 5
// sum = 25
#include<stdio.h>
int SumOfOddN(int);
int main()
{
    int x,Result;
    printf("Enter N=");
    scanf("%d",&x);
    printf("Sum of First %d Odd Natural Numbers=",x);
    Result=SumOfOddN(x);

    printf(" %d",Result);
    return 0;
}
int SumOfOddN(int n){
    if(n==1)
        return 1;
    return (2*n-1)+SumOfOddN(n-1);
}
