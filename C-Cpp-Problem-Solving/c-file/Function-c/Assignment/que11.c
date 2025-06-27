// Write a function to check whether a given number is Prime or not. (TSRS). 
// (Return 1 if prime, otherwise return 0)
// A prime number is a number greater than 1 that has only two factors: 1 and itself.
// ex : // 2 3 5 7 11 13 17 19 23 29 31 37
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
int Prime(int x){
    int i,temp=0;

    if(x<=1)return 0;

        for(i=2;i<x;i++){ 
        if(x%i==0){ 
        temp=1;
        }
    }

    if(temp==0)
        return 1; 
    else
     return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12

// 2 4 6 8 10

// 1 3 5 7 9 11
