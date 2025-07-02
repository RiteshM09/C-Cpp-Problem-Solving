// 14. Write a recursive function to print reverse of a given number
// function     -           void ReverseN(n/10)             542
// R.C          -           void print(n).ReverseN(n/10) 2 (54)
// B.C          -  n - 0
#include<stdio.h>
void ReverseN(int);
int main()
{
    int N,Result;
    printf("Enter N =");
    scanf("%d",&N);
    printf("Reverse of N = ");
    ReverseN(N);
    
    return 0;   
}
void ReverseN(int n){
    if(n>0){
     printf("%d",n%10);
     ReverseN(n/10);
     
    }
}

/*

ReverseN(542)
│
├─ prints 2      ← (542 % 10)
│
└── ReverseN(54)
     ├─ prints 4 ← (54 % 10)
     └── ReverseN(5)
           ├─ prints 5 ← (5 % 10)
           └── ReverseN(0) → ends

ans - 245
*/