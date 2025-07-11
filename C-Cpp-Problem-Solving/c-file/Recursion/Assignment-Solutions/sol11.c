//Write a recursive function to calculate sum of digits of a given number
// Function -   SumOfDigit(n) -  5834%10 - 5834  
// R.C      - n%10+SumOfDigit(n/10) 5834%10 - (583)4
// B.C      -   n==0 retun 0

//example:
// 532
// 5+2+3
#include<stdio.h>
int SumOfDigit(int);
int main(){
    int N,Result;
    printf("Enter N= ");
    scanf("%d",&N);
    Result = SumOfDigit(N);
    printf("sum of digit %d",Result);

    return 0;
}
int SumOfDigit(int n){
    if(n==0)
        return 0;

    return  n%10+SumOfDigit(n/10);
}
