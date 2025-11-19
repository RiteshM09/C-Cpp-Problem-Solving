//Write a function to Reverse a number
//Has better solution than this 
int ReverseN(int);
#include<stdio.h>
int main()
{
    int N,Result;
    printf("Enter a Number = ");
    scanf("%d",&N);
    Result=ReverseN(N);
    printf("Reverse of N =%d ",Result);
    return 0;
}
int ReverseN(int n){
    int rev=0;

    while(n){
    rev=10*rev+(n%10);
    n=n/10;
    }
    
    return rev;
}

