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

ReverseN(123)
│
├─ prints 3      ← (123 % 10)
│
└── ReverseN(12)
     ├─ prints 2 ← (12 % 10)
     └── ReverseN(1)
           ├─ prints 1 ← (1 % 10)
           └── ReverseN(0) → ends

*/