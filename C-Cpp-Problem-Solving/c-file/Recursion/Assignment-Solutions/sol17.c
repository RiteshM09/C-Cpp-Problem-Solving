// Write a Program to count the digit of given number using recursion
// function             -       CountDigit(n) - 3546 
// R.C                  -     CountDigit(n/10)+1 - (354)
// B.C                  - n- 0

// 92
// 2

// 985
// 3

// 3546
// 4

// 42342
// 5 

// CountDigit(539)  - 3
// CountDigit(53)+1   - 2

// CountDigit(N)   - 
// CountDigit(N/10)- 


#include<stdio.h>
int CountDigit(int);
int CountDigit(int n){
    if(n==0)
        return 0;
    return CountDigit(n/10)+1;
    
}

int main(){
    int N;
    printf("Enter Number to count digit  =");
    scanf("%d",&N);
    printf("Number  has %d digits ",CountDigit(N));
    return 0;
}
